#include "TDron.h"

TDron::TDron(Dron* dron, CompositeEssential* CE)
{
	this->CE = CE;
	this->dron = dron;
}