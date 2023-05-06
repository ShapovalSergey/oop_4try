#pragma once
#include "AdditionalCargo.h"
class Battery :
    public AdditionalCargo
{
public:
    Battery(Cargo* ac, string name, int weight) : AdditionalCargo(ac) { this->TakeInfo(name, weight); };
};

