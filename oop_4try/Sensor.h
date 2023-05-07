#pragma once
#include "Header.h"
#include "SensorImp.h"
class Sensor
{
private:
	SensorImp* imp;
public:
	Sensor(SensorImp* imp);
	virtual void PrintInfo();
	~Sensor();
};