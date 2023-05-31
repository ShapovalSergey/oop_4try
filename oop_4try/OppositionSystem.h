#pragma once
#include "ISystem.h"
#pragma once
class OppositionSystem :
    public ISystem
{
public:
	void doSomething();
	void returnName();
	string returnStringName();
	void Accept(IVisitor* iv);
};

