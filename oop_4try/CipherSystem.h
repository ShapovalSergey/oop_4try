#pragma once
#include "ISystem.h"

class CipherSystem :
	public ISystem
{
public:
	void doSomething();
	void returnName();
	string returnStringName();
	void Accept(IVisitor* iv);
};
