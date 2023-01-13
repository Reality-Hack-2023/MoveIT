/******************************************************************************
 * File: QCHTJointLookupTables.cs
 * Copyright (c) 2022 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
 *
 * Confidential and Proprietary - Qualcomm Technologies, Inc.
 *
 ******************************************************************************/

namespace Qualcomm.Snapdragon.Spaces
{
    internal static class QCHTJointLookupTables
    {
        public static readonly XrHandJointEXT[][] RotationLookup = {
            new [] {XrHandJointEXT.XR_HAND_JOINT_THUMB_METACARPAL_EXT, XrHandJointEXT.XR_HAND_JOINT_WRIST_EXT},
            new [] {XrHandJointEXT.XR_HAND_JOINT_THUMB_PROXIMAL_EXT, XrHandJointEXT.XR_HAND_JOINT_THUMB_METACARPAL_EXT},
            new [] {XrHandJointEXT.XR_HAND_JOINT_THUMB_DISTAL_EXT, XrHandJointEXT.XR_HAND_JOINT_THUMB_PROXIMAL_EXT},
            new [] {XrHandJointEXT.XR_HAND_JOINT_INDEX_METACARPAL_EXT, XrHandJointEXT.XR_HAND_JOINT_WRIST_EXT},
            new [] {XrHandJointEXT.XR_HAND_JOINT_INDEX_PROXIMAL_EXT, XrHandJointEXT.XR_HAND_JOINT_INDEX_METACARPAL_EXT},
            new [] {XrHandJointEXT.XR_HAND_JOINT_INDEX_INTERMEDIATE_EXT, XrHandJointEXT.XR_HAND_JOINT_INDEX_PROXIMAL_EXT},
            new [] {XrHandJointEXT.XR_HAND_JOINT_INDEX_DISTAL_EXT, XrHandJointEXT.XR_HAND_JOINT_INDEX_INTERMEDIATE_EXT},
            new [] {XrHandJointEXT.XR_HAND_JOINT_MIDDLE_METACARPAL_EXT, XrHandJointEXT.XR_HAND_JOINT_WRIST_EXT},
            new [] {XrHandJointEXT.XR_HAND_JOINT_MIDDLE_PROXIMAL_EXT, XrHandJointEXT.XR_HAND_JOINT_MIDDLE_METACARPAL_EXT},
            new [] {XrHandJointEXT.XR_HAND_JOINT_MIDDLE_INTERMEDIATE_EXT, XrHandJointEXT.XR_HAND_JOINT_MIDDLE_PROXIMAL_EXT},
            new [] {XrHandJointEXT.XR_HAND_JOINT_MIDDLE_DISTAL_EXT, XrHandJointEXT.XR_HAND_JOINT_MIDDLE_INTERMEDIATE_EXT},
            new [] {XrHandJointEXT.XR_HAND_JOINT_RING_METACARPAL_EXT, XrHandJointEXT.XR_HAND_JOINT_WRIST_EXT},
            new [] {XrHandJointEXT.XR_HAND_JOINT_RING_PROXIMAL_EXT, XrHandJointEXT.XR_HAND_JOINT_RING_METACARPAL_EXT},
            new [] {XrHandJointEXT.XR_HAND_JOINT_RING_INTERMEDIATE_EXT, XrHandJointEXT.XR_HAND_JOINT_RING_PROXIMAL_EXT},
            new [] {XrHandJointEXT.XR_HAND_JOINT_RING_DISTAL_EXT, XrHandJointEXT.XR_HAND_JOINT_RING_INTERMEDIATE_EXT},
            new [] {XrHandJointEXT.XR_HAND_JOINT_LITTLE_METACARPAL_EXT, XrHandJointEXT.XR_HAND_JOINT_WRIST_EXT},
            new [] {XrHandJointEXT.XR_HAND_JOINT_LITTLE_PROXIMAL_EXT, XrHandJointEXT.XR_HAND_JOINT_LITTLE_METACARPAL_EXT},
            new [] {XrHandJointEXT.XR_HAND_JOINT_LITTLE_INTERMEDIATE_EXT, XrHandJointEXT.XR_HAND_JOINT_LITTLE_PROXIMAL_EXT},
            new [] {XrHandJointEXT.XR_HAND_JOINT_LITTLE_DISTAL_EXT, XrHandJointEXT.XR_HAND_JOINT_LITTLE_INTERMEDIATE_EXT},
            new [] {XrHandJointEXT.XR_HAND_JOINT_WRIST_EXT},
            new [] {XrHandJointEXT.XR_HAND_JOINT_WRIST_EXT},
            new [] {XrHandJointEXT.XR_HAND_JOINT_WRIST_EXT},
            new [] {XrHandJointEXT.XR_HAND_JOINT_WRIST_EXT}
        };

        public static readonly XrHandJointEXT[] PointsLookup = {
            XrHandJointEXT.XR_HAND_JOINT_THUMB_PROXIMAL_EXT,
            XrHandJointEXT.XR_HAND_JOINT_THUMB_DISTAL_EXT,
            XrHandJointEXT.XR_HAND_JOINT_THUMB_TIP_EXT,
            XrHandJointEXT.XR_HAND_JOINT_INDEX_PROXIMAL_EXT,
            XrHandJointEXT.XR_HAND_JOINT_INDEX_INTERMEDIATE_EXT,
            XrHandJointEXT.XR_HAND_JOINT_INDEX_DISTAL_EXT,
            XrHandJointEXT.XR_HAND_JOINT_INDEX_TIP_EXT,
            XrHandJointEXT.XR_HAND_JOINT_MIDDLE_PROXIMAL_EXT,
            XrHandJointEXT.XR_HAND_JOINT_MIDDLE_INTERMEDIATE_EXT,
            XrHandJointEXT.XR_HAND_JOINT_MIDDLE_DISTAL_EXT,
            XrHandJointEXT.XR_HAND_JOINT_MIDDLE_TIP_EXT,
            XrHandJointEXT.XR_HAND_JOINT_RING_PROXIMAL_EXT,
            XrHandJointEXT.XR_HAND_JOINT_RING_INTERMEDIATE_EXT,
            XrHandJointEXT.XR_HAND_JOINT_RING_DISTAL_EXT,
            XrHandJointEXT.XR_HAND_JOINT_RING_TIP_EXT,
            XrHandJointEXT.XR_HAND_JOINT_LITTLE_PROXIMAL_EXT,
            XrHandJointEXT.XR_HAND_JOINT_LITTLE_INTERMEDIATE_EXT,
            XrHandJointEXT.XR_HAND_JOINT_LITTLE_DISTAL_EXT,
            XrHandJointEXT.XR_HAND_JOINT_LITTLE_TIP_EXT,
            XrHandJointEXT.XR_HAND_JOINT_WRIST_EXT,
            XrHandJointEXT.XR_HAND_JOINT_WRIST_EXT,
            XrHandJointEXT.XR_HAND_JOINT_WRIST_EXT,
            XrHandJointEXT.XR_HAND_JOINT_WRIST_EXT
        };
    }
}