#pragma once
#include "Sensor.h"
#include "ISystem.h"
typedef Sensor* ptrSensor;
typedef ISystem* ptrSystem;
class Dron
{
private:
	string model;
	string country;
	vector<ptrSensor> Sensor1;
	vector<ptrSystem> System;


public:
	Dron(string country, string model);
	vector<ptrSystem> ReturnSystems();
	void AddSystem(ISystem* newSystem);
	void AddSensor(Sensor* newSensor);
	void ActivateSystem(int number);
	void GetSensorInfo(int number);
	~Dron();
};

