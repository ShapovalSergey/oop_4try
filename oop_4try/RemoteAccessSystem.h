#pragma once
#include "ISystem.h"
typedef ISystem* ptrSystem;

class RemoteAccessSystem :
	public ISystem
{
private:
	vector<ptrSystem> System;
public:
	//RemoteAccessSystem();
	void doSomething();
	void returnName();
	void GetSystems(vector<ptrSystem> System);
};

