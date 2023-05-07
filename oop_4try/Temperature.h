#pragma once
#include "Header.h"
class Temperature 
{
private: 
	int value;
	string name;
public:
	Temperature(string name);
	int Analyze();
	void Output();
	string ReturnType();
	string ReturnName();
};

