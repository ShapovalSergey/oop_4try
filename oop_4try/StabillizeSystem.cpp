#include "StabillizeSystem.h"
#include "IVisitor.h"
void StabillizeSystem::doSomething()
{
	printf("������������� �����\n");
}

void StabillizeSystem::returnName()
{
	printf("Stabillizing");
}

string StabillizeSystem::returnStringName() { return "Stabillize"; }
void StabillizeSystem::Accept(IVisitor* iv) { iv->Visit(this); }