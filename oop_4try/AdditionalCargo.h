#pragma once
#include "Cargo.h"
class AdditionalCargo :
    public Cargo
{
private: 
    Cargo* cargo;
public:
    AdditionalCargo(Cargo *c);
    ~AdditionalCargo() {};
};

