#pragma once
#include "SensorImp.h"
class Barometr :
	public SensorImp
{
private:
	double value;
	string name;
	double Analyze();
public:
	Barometr(string name);
	double GetValue();
	string GetName();
	string GetType();
	void WriteValue();
};


