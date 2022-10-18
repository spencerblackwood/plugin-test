/*
------------------------------------------------------------------

This file is part of the Open Ephys GUI
Copyright (C) 2022 Open Ephys

------------------------------------------------------------------

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <pybind11/pybind11.h>

#include "PluginTest.h"
#include "PluginTestEditor.h"


namespace py = pybind11;

PluginTest::PluginTest()
    : GenericProcessor("Plugin Name")
{

}


PluginTest::~PluginTest()
{

}


AudioProcessorEditor* PluginTest::createEditor()
{
    editor = std::make_unique<PluginTestEditor>(this);
    return editor.get();
}


void PluginTest::updateSettings()
{


}


void PluginTest::process(AudioBuffer<float>& buffer)
{

    checkForEvents(true);

}


void PluginTest::handleTTLEvent(TTLEventPtr event)
{

}


void PluginTest::handleSpike(SpikePtr event)
{

}


void PluginTest::handleBroadcastMessage(String message)
{

}


void PluginTest::saveCustomParametersToXml(XmlElement* parentElement)
{

}


void PluginTest::loadCustomParametersFromXml(XmlElement* parentElement)
{

}
