#include "BarCreator.h"

Sensor* BarCreator::Create(string name)
{
	return new Sensor(new Barometr(name));
};