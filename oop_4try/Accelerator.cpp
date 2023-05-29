#include "Accelerator.h"

Accelerator::Accelerator(string name)
{
	this->name = name;;
}


double Accelerator::Analyze()
{
	double result;
	srand(time(0));
	int value = rand() % 1000;
	return value;
};

string Accelerator::GetName()
{ 
	return name;
};

string Accelerator::GetType() 
{
	return "Датчик ускорения";
}

void Accelerator::WriteValue()
{
	printf("Write to file\n");
}


double Accelerator::GetValue() 
{
	double result = 0;
	for (int i = 0; i < 10; i++)
	{
		result += this->Analyze();
	}

	return result / 10.0;
}
