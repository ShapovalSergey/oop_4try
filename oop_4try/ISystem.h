#pragma once
#include "Header.h"

class ISystem
{
public:
	//ISystem() {};
	virtual void doSomething() = 0;
	virtual void returnName() = 0;
	//~ISystem();
};
