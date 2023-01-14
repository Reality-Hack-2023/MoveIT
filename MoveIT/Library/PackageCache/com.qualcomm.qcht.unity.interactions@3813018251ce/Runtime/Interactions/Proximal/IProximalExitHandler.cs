// /******************************************************************************
//  * File: IProximalExitHandler.cs
//  * Copyright (c) 2022 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
//  *
//  * Confidential and Proprietary - Qualcomm Technologies, Inc.
//  *
//  ******************************************************************************/

using UnityEngine.EventSystems;

namespace QCHT.Interactions.Proximal
{
    public interface IProximalExitHandler : IEventSystemHandler
    {
        public void OnProximalExit(InteractionData eventData);
    }
}