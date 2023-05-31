#pragma once
#include "ISystem.h"
class FlySystem :
    public ISystem
{
public:
	void doSomething();
	void returnName();
	string returnStringName();
};

