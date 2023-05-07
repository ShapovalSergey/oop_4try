#include "Temperature.h"

Temperature::Temperature(string name) 
{
	this->name = name;
}

int Temperature::Analyze() 
{
	srand(time(0));
	int value = rand()%100;
	return value;
};

void Temperature::Output() 
{
	printf("Температура = %d\n",value);
};

string Temperature::ReturnName() 
{
	return this->name;
}

string Temperature::ReturnType()
{
	return "Термометр";
}