#include "Temperature.h"

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