#include "ComCreator.h"

Sensor* ComCreator::Create(string name)
{
	return new Sensor(new Compas(name));
};