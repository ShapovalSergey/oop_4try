#pragma once
#include "Dron.h"
#include "CompositeEssential.h"
class TDron
{
private:
	Dron* dron;
	CompositeEssential *CE;
public:
	TDron(Dron* dron,CompositeEssential* CE);
	Dron* ReturnDron() { return dron; };
	CompositeEssential* ReturnCE() { return CE; };
};

