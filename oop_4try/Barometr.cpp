#include "Barometr.h"

Barometr::Barometr(string name)
{
	this->name = name;;
}


double Barometr::Analyze()
{
	double result;
	srand(time(0));
	int value = rand() % 800;
	return value;
};

string Barometr::GetName()
{
	return name;
};

string Barometr::GetType()
{
	return "Датчик давления";
}

void Barometr::WriteValue()
{
	printf("Write to file\n");
}

double Barometr::GetValue()
{
	double result = 0;
	for (int i = 0; i < 10; i++)
	{
		result += this->Analyze();
	}
	return result / 10.0;
}
