#include "RemoveInfoSystem.h"
#include "IVisitor.h"
void RemoveInfoSystem::doSomething()
{
	printf("������� ���������� � �����\n");
};

void RemoveInfoSystem::returnName()
{
	printf("Removing");
};


string RemoveInfoSystem::returnStringName() { return "RemoveInfo"; }
void RemoveInfoSystem::Accept(IVisitor* iv) { iv->Visit(this); }