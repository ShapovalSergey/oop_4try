#include "Adapter.h"

void Adapter::GetInfo()
{
	printf("Получил показания температуры\n");
};
void Adapter::GiveInfo()
{
	double result = 0;
	for (int i = 0; i < 4; i++)
	{
		result += temp->Analyze();
		Sleep(100);
	}
	printf("Среднее значение температуры = %.2lf\n",result/4.0);
};
Adapter::Adapter(Temperature* t)
{
	temp = t;
};
