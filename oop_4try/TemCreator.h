#pragma once
#include "SensorCreator.h"
#include "Adapter.h"
class TemCreator :
    public SensorCreator
{
public:
    Sensor* Create(string name);
};

