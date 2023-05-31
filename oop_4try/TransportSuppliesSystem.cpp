#include "TransportSuppliesSystem.h"
#include "IVisitor.h"
void TransportSuppliesSystem::doSomething()
{
	printf("Доставил груз\n");
}

void TransportSuppliesSystem::returnName()
{
	printf("TransportSupplies");
}

string TransportSuppliesSystem::returnStringName() { return "TransportSupplies"; }
void TransportSuppliesSystem::Accept(IVisitor* iv) { iv->Visit(this); }