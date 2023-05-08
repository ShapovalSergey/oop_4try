#include "GyrCreator.h"

Sensor* GyrCreator::Create(string name)
{
	return new Sensor(new Gyroscope(name));
};