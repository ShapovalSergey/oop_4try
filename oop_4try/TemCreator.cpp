#include "TemCreator.h"

Sensor* TemCreator::Create(string name)
{
	return new Sensor(new Adapter(new Temperature(name)));
};