using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.UI;
using UnityEngine.XR.OpenXR;
using UnityEngine.InputSystem.Interactions;
using UnityEngine.XR;
using UnityEngine.XR.ARFoundation;
using InputDevice = UnityEngine.XR.InputDevice;
using System.Collections;
using System.Collections.Generic;

namespace Qualcomm.Snapdragon.Spaces.Samples
{
    public class QuittyMcQuittyController : MonoBehaviour
    {
        public InputActionReference SwitchInputAction;

        public void Start() {
            Screen.sleepTimeout = SleepTimeout.NeverSleep;
        }

        public void Quit() {
            Application.Quit();
        }

        public virtual void OnEnable() {
            SwitchInputAction.action.performed += OnSwitchInput;
        }

        public virtual void OnDisable() {
            SwitchInputAction.action.performed -= OnSwitchInput;
        }

        private void OnSwitchInput(InputAction.CallbackContext ctx) {
            if (ctx.interaction is HoldInteraction) {
                Quit();
            }
        }
    }
}