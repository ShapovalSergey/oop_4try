#include "Dron.h"

Dron::Dron(string country, string model)
{
	this->model = model;
	this->country = country;
	Sensor1.clear();
	System.clear();
}

void Dron::ActivateSystem(int number)
{
	System[number]->doSomething();
}

vector<ptrSystem> Dron::ReturnSystems()
{
	return System;
}

void Dron::AddSystem(ISystem* newSystem)
{
	System.push_back(newSystem);
}

void Dron::AddSensor(Sensor* newSensor)
{
	Sensor1.push_back(newSensor);
}

void Dron::GetSensorInfo(int number)
{
	Sensor1[number]->PrintInfo();
}
