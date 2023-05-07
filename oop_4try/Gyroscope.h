#pragma once
#include "SensorImp.h"
class Gyroscope :
	public SensorImp
{
private:
	double value;
	string name;
	double Analyze();
public:
	Gyroscope(string name);
	double GetValue();
	string GetName();
	string GetType();
	void WriteValue();
};

