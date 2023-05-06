#pragma once
#include "Essential.h"
class LeafEssential :
    public Essential
{
public:
    LeafEssential(string name) : Essential(name) {}
	virtual void Composition();
    virtual void Display();
};

