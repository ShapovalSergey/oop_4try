#include "OppositionSystem.h"
#include "IVisitor.h"
void OppositionSystem::doSomething()
{
	printf("���������������� ���������\n");
};

void OppositionSystem::returnName()
{
	printf("Opposition");
};

string OppositionSystem::returnStringName() { return "Opposition"; }
void OppositionSystem::Accept(IVisitor* iv) { iv->Visit(this); }