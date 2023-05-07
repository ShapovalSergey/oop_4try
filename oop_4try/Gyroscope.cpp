#include "Gyroscope.h"

Gyroscope::Gyroscope(string name)
{
	this->name = name;;
}


double Gyroscope::Analyze()
{
	double result;
	srand(time(0));
	int value = rand() % 360;
	return value;
};

string Gyroscope::GetName()
{
	return name;
};

string Gyroscope::GetType()
{
	return "Датчик угла наклона";
}

void Gyroscope::WriteValue()
{
	printf("Write to file\n");
}

double Gyroscope::GetValue()
{
	double result = 0;
	for (int i = 0; i < 10; i++)
	{
		result += this->Analyze();
	}
	return result / 10.0;
}
