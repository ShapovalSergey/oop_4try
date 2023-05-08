#pragma once
#include "TDron.h";
class IDronFactory
{
public:
	virtual TDron* createDron(string country, string model) = 0;
};

