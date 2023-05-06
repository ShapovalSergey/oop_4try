#pragma once
#include "Sensor.h"
#include "Temperature.h"
class Adapter :
    public Sensor
{
private:
    Temperature* temp;
public:
    virtual void GetInfo();
    virtual void GiveInfo();
    Adapter(Temperature *t);
};

