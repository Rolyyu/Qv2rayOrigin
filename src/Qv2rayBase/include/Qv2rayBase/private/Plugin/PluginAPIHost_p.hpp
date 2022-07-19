//  Qv2rayBase, the modular feature-rich infrastructure library for Qv2ray.
//  Copyright (C) 2021 Moody and relavent Qv2ray contributors.
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <https://www.gnu.org/licenses/>.

// ************************ WARNING ************************
//
// This file is NOT part of the Qv2rayBase API.
// It may change at any time without notice, or even be removed.
// USE IT AT YOUR OWN RISK
//
// ************************ WARNING ************************

#pragma once
#include "QvPlugin/PluginInterface.hpp"

namespace Qv2rayBase::Plugin
{
    class PluginAPIHostPrivate
    {
      public:
        ~PluginAPIHostPrivate() = default;
        QHash<LatencyTestEngineId, Qv2rayPlugin::LatencyTestEngineInfo> latencyTesters = {};
        QHash<KernelId, Qv2rayPlugin::KernelFactory> kernels = {};
    };
} // namespace Qv2rayBase::Plugin
