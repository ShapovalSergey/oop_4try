#pragma once
#include "SensorCreator.h"
#include "Gyroscope.h"
class GyrCreator :
    public SensorCreator
{
    public:
        Sensor* Create(string name);
};

