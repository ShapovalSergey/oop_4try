#pragma once
#include "SensorCreator.h"
#include "Barometr.h"
class BarCreator :
    public SensorCreator
{
public:
    Sensor* Create(string name);
};

