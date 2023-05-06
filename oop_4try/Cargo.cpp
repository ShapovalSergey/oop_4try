#include "Cargo.h"

Cargo::Cargo(string name, int weight)
{
	this->name = name;
	this->weight = weight;
}

int Cargo::ReturnWeight() 
{
	return weight;
}

string Cargo::ReturnName()
{
	return name;
}

void Cargo::GetInfo() 
{
	printf("���� - %s, ��� - %d ��\n",this->ReturnName().c_str(),this->ReturnWeight());
}

void Cargo::TakeInfo(string name, int weight)
{
	this->name = name;
	this->weight = weight;
};