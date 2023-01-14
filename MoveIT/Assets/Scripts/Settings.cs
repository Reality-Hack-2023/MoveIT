using QCHT.Interactions.Hands;
using UnityEngine;

namespace QCHT.Menu
{
    [CreateAssetMenu(fileName = "NewSettings", menuName = "QCHT/SampleSettings", order = 0)]
    public class Settings : ScriptableObject
    {
        public string SceneName;
        public HandInteractionType HandType;
        public bool EnablePhysicRaycast;
    }
}