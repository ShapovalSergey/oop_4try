#pragma once
#include "ISystem.h"
class ScanSystem :
	public ISystem
{
public:
	void doSomething();
	void returnName();
	void StartScanning(int time);
	void StopScanning();
	string returnStringName();
};

