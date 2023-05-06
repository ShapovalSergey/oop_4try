#pragma once
#include "Header.h"
class Essential
{
protected: 
	string name;
public:
	Essential() {};
	Essential(string name);
	virtual void Display() = 0;
	virtual void Composition() = 0;

};

