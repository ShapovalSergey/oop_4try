#include "RemoteAccessSystem.h"

void RemoteAccessSystem::doSomething()
{
	int mode = -1;
	while (mode != System.size() + 1)
	{
		printf("Выберите систему\n");
		for (int i = 0; i < System.size(); i++)
		{
			printf("%d)", i + 1); System[i]->returnName();
			printf("\n");
		}
		printf("%d)Выйти из режима удаленного доступа\n", System.size() + 1);
		scanf_s("%d", &mode);
		if ((mode > -1) && (mode < System.size()))
		{
			printf("----Начало выполнения системы----\n");
			System[mode - 1]->doSomething();
			printf("----Конец выполнения системы----\n");
		}
	}
}

void RemoteAccessSystem::returnName()
{
	printf("RemoteAccessSystem");
};

void RemoteAccessSystem::GetSystems(vector<ptrSystem> System)
{
	this->System = System;
};