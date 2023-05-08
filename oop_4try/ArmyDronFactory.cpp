#include "ArmyDronFactory.h"

TDron* ArmyDronFactory::createDron(string country, string model)
{
	ConcreteDron *CD = new ConcreteDron(country,model);
	ConcreteCompositeEssential* CCE=new ConcreteCompositeEssential();
	return new TDron(CD,CCE);
}