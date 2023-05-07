#include "Compas.h"

Compas::Compas(string name)
{
	this->name = name;;
}


double Compas::Analyze()
{
	double result;
	srand(time(0));
	int value = rand() % 360;
	return value;
};

string Compas::GetName()
{
	return name;
};

string Compas::GetType()
{
	return "Датчик направления по компасу";
}

void Compas::WriteValue()
{
	printf("Write to file\n");
}

double Compas::GetValue()
{
	double result = 0;
	for (int i = 0; i < 10; i++)
	{
		result += this->Analyze();
	}
	return result / 10.0;
}
