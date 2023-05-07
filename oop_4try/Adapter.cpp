#include "Adapter.h"


Adapter::Adapter(Temperature* t)
{
	temp = t;
};

string Adapter::GetName()
{
	return temp->ReturnName();
};

string Adapter::GetType()
{
	return temp->ReturnType();
}

void Adapter::WriteValue()
{
	printf("Write to file\n");
}

double Adapter::GetValue()
{
	double result = 0;
	for (int i = 0; i < 10; i++)
	{
		result += temp->Analyze();
	}
	return result / 10.0;
}
