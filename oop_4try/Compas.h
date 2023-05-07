#pragma once
#include "SensorImp.h"
class Compas :
	public SensorImp
{
private:
	double value;
	string name;
	double Analyze();
public:
	Compas(string name);
	double GetValue();
	string GetName();
	string GetType();
	void WriteValue();
};


