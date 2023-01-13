﻿/******************************************************************************
 * File: XrImageTrackerDataSetImageQCOM.cs
 * Copyright (c) 2022 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
 *
 * Confidential and Proprietary - Qualcomm Technologies, Inc.
 *
 ******************************************************************************/

using System;
using System.Runtime.InteropServices;

namespace Qualcomm.Snapdragon.Spaces
{
    [StructLayout(LayoutKind.Sequential)]
    internal struct XrImageTrackerDataSetImageQCOM {
        XrStructureType _type;
        IntPtr _next;
        string _name;
        float _height;
        XrVector2f _pixelSize;
        IntPtr /* byte[] */ _buffer;
        uint _bufferSize;

        public XrImageTrackerDataSetImageQCOM(string name, float height, XrVector2f pixelSize, IntPtr buffer, uint bufferSize) {
            _type = XrStructureType.XR_TYPE_IMAGE_TRACKER_DATA_SET_IMAGE_QCOM;
            _next = IntPtr.Zero;
            _name = name;
            _height = height;
            _pixelSize = pixelSize;
            _buffer = buffer;
            _bufferSize = bufferSize;
        }
    }
}