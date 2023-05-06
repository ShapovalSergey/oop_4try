#pragma once
#include "AdditionalCargo.h"
class Patrons :
    public AdditionalCargo
{
public:
    Patrons(Cargo* c, string name, int weight) : AdditionalCargo(c) { this->TakeInfo(name, weight); };
};

