#include "ScanSystem.h"

void ScanSystem::doSomething()
{
	printf("��������� ���������\n");
}

void ScanSystem::returnName()
{
	printf("Scanning");
}
void ScanSystem::StartScanning(int time) 
{
	printf("������ ������������\n");
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
	printf("���������� ������������\n");
}

string ScanSystem::returnStringName() { return "Scan"; }