#pragma once
#include "Header.h"
#include "Dron.h"
#include "DroneFrame.h"
#include "Cargo.h"
#include "CompositeEssential.h"
class Facade
{
private:
	Dron* dron;
	DroneFrame* DF;
	CompositeEssential CE;
	vector<Sensor*> sen;
	vector<Cargo*> car;
public:
	Facade(Dron* dron, DroneFrame* DF, CompositeEssential CE, vector<Sensor*> sen, vector<Cargo*> car);
	void GetSensorInfo(int number);
	void DronActivateSystem(int number);
	void GetCargoInfo(int number);
	void GetEssentialInfo();
	int RetSenSize();
	int RetCarSize();
};

