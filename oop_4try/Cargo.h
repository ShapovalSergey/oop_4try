#pragma once
#include "Header.h"
class Cargo
{
private:
	string name;
	int weight;
public:
	Cargo() {};
	Cargo(string name, int weight);
	void GetInfo();
	void TakeInfo(string name, int weight);
	int ReturnWeight();
	string ReturnName();
	//~Cargo();
};

