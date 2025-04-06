/*
Copyright: Andrew Hanson
License: GNU GPL-3.0
*/

#include "plugin.hpp"

Plugin* pluginInstance;


void init(Plugin* p) {
	pluginInstance = p;

	// Add modules here
	p->addModel(modelShiftyMod);
	#ifndef METAMODULE
	p->addModel(modelShiftyExpander);
	#endif
	p->addModel(modelIceTray);
	p->addModel(modelAstroVibe);
	p->addModel(modelGlassPane);
	#ifndef METAMODULE
	p->addModel(modelPlusPane);
	#endif
	p->addModel(modelNudge);
	p->addModel(modelOneShot);

	// Any other plugin initialization may go here.
	// As an alternative, consider lazy-loading assets and lookup tables when your module is created to reduce startup times of Rack.
}
