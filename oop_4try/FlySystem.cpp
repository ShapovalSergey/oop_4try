#include "FlySystem.h"
#include "IVisitor.h"
void FlySystem::doSomething()
{
	printf("��������� �������\n");
}
void FlySystem::returnName()
{
	printf("Fly");
}

string FlySystem::returnStringName() { return "Fly"; }
void FlySystem::Accept(IVisitor* iv) { iv->Visit(this); }