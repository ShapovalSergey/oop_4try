#pragma once
#include "SensorImp.h"
#include "Temperature.h"
class Adapter :
    public SensorImp
{
private:
    Temperature* temp;
public:
    double GetValue();
    string GetName();
    string GetType();
    void WriteValue();
    Adapter(Temperature *t);
};

