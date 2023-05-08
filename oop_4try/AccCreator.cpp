#include "AccCreator.h"

Sensor* AccCreator::Create(string name) 
{
	return new Sensor(new Accelerator(name));
};