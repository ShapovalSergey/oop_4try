#pragma once
#include "ISystem.h"
#include "RemoteAccessSystem.h"
class RemoteAccessProxy :
	public ISystem
{
private:
	RemoteAccessSystem* RealObject;
public:
	RemoteAccessProxy();
	void doSomething();
	void returnName();
	void GetSystems(vector<ptrSystem> System);
	~RemoteAccessProxy();
	string returnStringName();
};

