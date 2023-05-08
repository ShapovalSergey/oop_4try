#pragma once
#include "SensorCreator.h"
#include "Accelerator.h"
class AccCreator :
    public SensorCreator
{
public:
     Sensor* Create(string name);
};

