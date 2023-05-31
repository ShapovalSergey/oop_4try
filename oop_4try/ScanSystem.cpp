#include "ScanSystem.h"

void ScanSystem::doSomething()
{
	printf("Сканирует местность\n");
}

void ScanSystem::returnName()
{
	printf("Scanning");
}
void ScanSystem::StartScanning(int time) 
{
	printf("Начать сканирование\n");
	doSomething();
	for (int i = 0; i < 10; i++)
	{
		printf(".");
		Sleep(time/10);
	}
	printf("\n");
}
void ScanSystem::StopScanning() 
{
	printf("Прекратить сканирование\n");
}

string ScanSystem::returnStringName() { return "Scan"; }