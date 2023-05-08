#pragma once
#include "SensorCreator.h"
#include "Compas.h"
class ComCreator :
    public SensorCreator
{
public:
    Sensor* Create(string name);
};

