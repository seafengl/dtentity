/*
* dtEntity Game and Simulation Engine
*
* This library is free software; you can redistribute it and/or modify it under
* the terms of the GNU Lesser General Public License as published by the Free
* Software Foundation; either version 2.1 of the License, or (at your option)
* any later version.
*
* This library is distributed in the hope that it will be useful, but WITHOUT
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
* FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more
* details.
*
* You should have received a copy of the GNU Lesser General Public License
* along with this library; if not, write to the Free Software Foundation, Inc.,
* 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
*
* Martin Scheffler
*/

#include <dtEntitySimulation/groundclampingcomponent.h>
#include <dtEntitySimulation/manipulatorcomponent.h>
#include <dtEntitySimulation/particlecomponent.h>
#include <dtEntitySimulation/pathcomponent.h>
#include <dtEntity/componentplugin.h>
#include <dtEntity/componentpluginmanager.h>

////////////////////////////////////////////////////////////////////////////////
extern "C" DTE_EXPORT_MACRO void dtEntityMessages_dtEntitySimulation(dtEntity::MessageFactory& mf)
{
}

REGISTER_DTENTITYPLUGIN(dtEntitySimulation, 4,
   new dtEntity::ComponentPluginFactoryImpl<dtEntitySimulation::GroundClampingSystem>("GroundClamping"),
   new dtEntity::ComponentPluginFactoryImpl<dtEntitySimulation::ManipulatorSystem>("Manipulator"),
   new dtEntity::ComponentPluginFactoryImpl<dtEntitySimulation::ParticleSystem>("Particle"),
   new dtEntity::ComponentPluginFactoryImpl<dtEntitySimulation::PathSystem>("Path")
)
