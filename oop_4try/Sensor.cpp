#include "Sensor.h"

Sensor::Sensor(SensorImp* imp)
{
	this->imp = imp;
}
void Sensor::PrintInfo() 
{
	printf("\nПоказания датчика %s\nТип датчика: %s\nЗначение датчика: %.2lf\n\n",imp->GetName().c_str(),imp->GetType().c_str(),imp->GetValue());
}