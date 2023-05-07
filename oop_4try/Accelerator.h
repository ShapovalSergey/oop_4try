#pragma once
#include "SensorImp.h"
class Accelerator :
    public SensorImp
{
private: 
	double value;
	string name;
	double Analyze();
public:
	Accelerator(string name);
	double GetValue();
	string GetName();
	string GetType();
	void WriteValue();

};

