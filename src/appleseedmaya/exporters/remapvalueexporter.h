
//
// This source file is part of appleseed.
// Visit http://appleseedhq.net/ for additional information and resources.
//
// This software is released under the MIT license.
//
// Copyright (c) 2017 Luis Barrancos, The appleseedhq Organization
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//

#ifndef APPLESEED_MAYA_EXPORTERS_REMAPVALUEEXPORTER_H
#define APPLESEED_MAYA_EXPORTERS_REMAPVALUEEXPORTER_H

// appleseed.maya headers.
#include "appleseedmaya/exporters/shadingnodeexporter.h"

class RemapValueExporter
  : public ShadingNodeExporter
{
  public:
    static void registerExporter();

    static ShadingNodeExporter* create(
        const MObject&          object,
        renderer::ShaderGroup&  shaderGroup);

  private:
    RemapValueExporter(
        const MObject&          object,
        renderer::ShaderGroup&  shaderGroup);

    void exportParameterValue(
        const MPlug&            plug,
        const OSLParamInfo&     paramInfo,
        renderer::ParamArray&   shaderParams) const override;
};

#endif  // !APPLESEED_MAYA_EXPORTERS_REMAPVALUEEXPORTER_H
