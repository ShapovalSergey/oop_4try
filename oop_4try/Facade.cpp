#include "Facade.h"

Facade::Facade(Dron* dron, DroneFrame* DF, CompositeEssential CE, vector<Sensor*> sen, vector<Cargo*> car)
{
	this->CE = CE;
	this->dron = dron;
	this->DF = DF;
	this->sen = sen;
	this->car = car;
}
void Facade::GetSensorInfo(int number) 
{
	dron->GetSensorInfo(number);
}

void Facade::DronActivateSystem(int number)
{
	dron->ActivateSystem(number);
}

void Facade::GetCargoInfo(int number)
{
	this->car[number]->GetInfo();
}

void Facade::GetEssentialInfo()
{
	CE.Display();
}

int Facade::RetSenSize() { return sen.size(); }
int Facade::RetCarSize() { return car.size(); }