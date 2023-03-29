#pragma once
#include "Header.h"
class Sensor
{
private:
	string name;
	string type;
public:
	Sensor() {};
	Sensor(string name, string type);
	virtual void GetInfo() = 0;
	virtual void GiveInfo() = 0;
	~Sensor();
};