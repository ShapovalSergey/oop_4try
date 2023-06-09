#pragma once
#include "Header.h"
#include "Dron.h"
#include "TDron.h"
#include "DroneFrame.h"
#include "Cargo.h"
#include "CompositeEssential.h"
class Facade
{
private:
	Dron* dron;
	DroneFrame* DF;
	CompositeEssential *CE;
	//vector<Sensor*> sen;
	vector<Cargo*> car;
public:
	Facade(Dron* dron, DroneFrame* DF, CompositeEssential *CE, vector<Cargo*> car);
	Facade(TDron* dron, DroneFrame* DF, vector<Cargo*> car);
	void GetSensorInfo(int number);
	void DronActivateSystem(int number);
	void GetCargoInfo(int number);
	void GetEssentialInfo();
	void SetEssentials(CompositeEssential* CE) { this->CE = CE; };
	int RetSenSize();
	int RetCarSize();
	CompositeEssential* RetCE() { return CE; };
};

