#pragma once
#include "Header.h"
class SensorImp
{
public:
	virtual double GetValue() = 0;
	virtual string GetName() = 0;
	virtual string GetType() = 0;
	virtual void WriteValue() = 0;
};

