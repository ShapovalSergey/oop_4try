#pragma once
class ConcreateVisitor;
#include "ISystem.h"
#include "Invoker.h"
#include "ScanCommand.h"
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
	string returnStringName();
	void Accept(IVisitor* iv);
};

