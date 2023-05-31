#pragma once
class IVisitor;
#include "Header.h"
class ISystem
{
public:
	//ISystem() {};
	virtual void doSomething() = 0;
	virtual void returnName() = 0;
	virtual string returnStringName() = 0;
	virtual void Accept(IVisitor* iv) = 0;
	//~ISystem();
};

