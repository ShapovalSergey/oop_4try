#pragma once
#include "Dron.h"
#include "Systems.h"
#include "Header.h"
#include "Creators.h"
class ConcreteDron :
    public Dron
{
public:
    ConcreteDron(string country, string model);
};

