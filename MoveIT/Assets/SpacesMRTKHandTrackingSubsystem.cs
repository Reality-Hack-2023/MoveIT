using Microsoft.MixedReality.Toolkit.Subsystems;
using System.Collections.Generic;
using Unity.Profiling;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.Scripting;
using UnityEngine.XR;
using Qualcomm.Snapdragon.Spaces;
using CommonUsages = UnityEngine.XR.CommonUsages;
using InputDevice = UnityEngine.XR.InputDevice;
using System;

namespace Microsoft.MixedReality.Toolkit.Input
{
    [Preserve]
    [MRTKSubsystem(
        Name = "com.qualcomm.spaceshands",
        DisplayName = "Subsystem for Snapdragon Spaces Hands API",
        Author = "Qualcomm",
        ProviderType = typeof(SpacesHandsProvider),
        SubsystemTypeOverride = typeof(SpacesMRTKHandTrackingSubsystem),
        ConfigType = typeof(BaseSubsystemConfig))]
    public class SpacesMRTKHandTrackingSubsystem : HandsSubsystem
    {
        [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.SubsystemRegistration)]
        private static void Register()
        {
            // Fetch subsystem metadata from the attribute.
            var cinfo = XRSubsystemHelpers.ConstructCinfo<SpacesMRTKHandTrackingSubsystem, HandsSubsystemCinfo>();

            // Populate remaining cinfo field.
            cinfo.IsPhysicalData = true;

            if (!Register(cinfo))
            {
                Debug.LogError($"Failed to register the {cinfo.Name} subsystem.");
            }
        }

        [Preserve]
        private class SpacesHandsProvider : Provider
        {
            bool isConnectedToHandManager;

            public override void Start()
            {
                base.Start();
                InputSystem.onBeforeUpdate += ResetHands;
            }

            void ConnectToHandManager()
            {
                if (!isConnectedToHandManager)
                {
                    if (SpacesHandManager.instance != null)
                    {
                        SpacesHandManager.instance.handsChanged += Instance_handsChanged;
                        isConnectedToHandManager = true;
                    }
                }
            }

            public override void Stop()
            {
                ResetHands();
                if (isConnectedToHandManager)
                {
                    SpacesHandManager.instance.handsChanged -= Instance_handsChanged;
                    isConnectedToHandManager = false;
                }
                InputSystem.onBeforeUpdate -= ResetHands;
                base.Stop();
            }

            SpacesHand handLeft;
            SpacesHand handRight;

            HandJointPose[] handJointsLeft = new HandJointPose[(int)TrackedHandJoint.TotalJoints];
            HandJointPose[] handJointsRight = new HandJointPose[(int)TrackedHandJoint.TotalJoints];

            private void Instance_handsChanged(SpacesHandsChangedEventArgs obj)
            {
                if (!isConnectedToHandManager)
                {
                    return;
                }

                foreach (var hand in obj.removed)
                {
                    if (hand == handLeft)
                    {
                        handLeft = null;
                    }

                    if (hand == handRight)
                    {
                        handRight = null;
                    }
                }

                foreach (var hand in obj.added)
                {
                    if (hand.IsLeft)
                    {
                        handLeft = hand;
                    }
                    else
                    {
                        handRight = hand;
                    }
                }
            }

            private void ResetHands()
            {
            }

            #region IHandsSubsystem implementation

            /// <inheritdoc/>
            public override bool TryGetEntireHand(XRNode handNode, out IReadOnlyList<HandJointPose> jointPoses)
            {
                ConnectToHandManager();
                jointPoses = null;

                if (!isConnectedToHandManager)
                {
                    return false;
                }

                Debug.Assert(handNode == XRNode.LeftHand || handNode == XRNode.RightHand, "Non-hand XRNode used in TryGetEntireHand query");
                HandJointPose[] handJoints = handNode == XRNode.LeftHand ? handJointsLeft : handJointsRight;

                SpacesHand hand = handRight;
                if (handNode == XRNode.LeftHand)
                {
                    hand = handLeft;
                }

                if (hand == null)
                {
                    return false;
                }

                var joints = hand.Joints;
                for (int i = 0; i < joints.Length; i++)
                {
                    var joint = joints[i];
                    handJoints[i].Position = joint.Pose.position;
                    handJoints[i].Rotation = joint.Pose.rotation;
                    handJoints[i].Radius = 0.005f;
                }

                jointPoses = handJoints;
                return true;
            }

            /// <inheritdoc/>
            public override bool TryGetJoint(TrackedHandJoint joint, XRNode handNode, out HandJointPose jointPose)
            {
                ConnectToHandManager();
                if (!isConnectedToHandManager)
                {
                    jointPose = new HandJointPose();//.pose = new Pose(Vector3.zero, Quaternion.identity);
                    return false;
                }

                Debug.Assert(handNode == XRNode.LeftHand || handNode == XRNode.RightHand, "Non-hand XRNode used in TryGetJoint query");

                SpacesHand hand = handRight;
                if (handNode == XRNode.LeftHand)
                {
                    hand = handLeft;
                }

                if (hand == null)
                {
                    jointPose = new HandJointPose();//.pose = new Pose(Vector3.zero, Quaternion.identity);
                    return false;
                }

                var joints = hand.Joints;
                if (joints == null || joints[(int)joint] == null)
                {
                    jointPose = new HandJointPose();//.pose = new Pose(Vector3.zero, Quaternion.identity);
                    return false;
                }

                HandJointPose[] handJoints = handNode == XRNode.LeftHand ? handJointsLeft : handJointsRight;

                // Now do it
                handJoints[(int)joint].Position = joints[(int)joint].Pose.position;
                handJoints[(int)joint].Rotation = joints[(int)joint].Pose.rotation;
                jointPose = handJoints[(int)joint];
                return true;
            }
            #endregion IHandsSubsystem implementation
        }
    }
}