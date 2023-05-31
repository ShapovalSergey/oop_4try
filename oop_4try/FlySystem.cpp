#include "FlySystem.h"
#include "IVisitor.h"
void FlySystem::doSomething()
{
	printf("”правл€ет полетом\n");
}
void FlySystem::returnName()
{
	printf("Fly");
}

string FlySystem::returnStringName() { return "Fly"; }
void FlySystem::Accept(IVisitor* iv) { iv->Visit(this); }