#pragma once
#include "IDronFactory.h"
#include "ConcreteDron.h"
#include "ConcreteCompositeEssential.h" 
class ArmyDronFactory :
    public IDronFactory
{
public:
    TDron* createDron(string country, string model);
};

