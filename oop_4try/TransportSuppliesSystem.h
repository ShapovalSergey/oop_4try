#pragma once
#include "ISystem.h"
class TransportSuppliesSystem :
	public ISystem
{
public:
	void doSomething();
	void returnName();
	string returnStringName();
	void Accept(IVisitor* iv);
};

