#pragma once
#include "Sensor.h"
class SensorCreator
{
public: 
	virtual Sensor* Create(string name) = 0;
};

