#include "TransportInformation.h"
#include "IVisitor.h"
void TransportInformation::doSomething()
{
	printf("�������� ����������\n");
};

void TransportInformation::returnName()
{
	printf("TransportInfo");
};

string TransportInformation::returnStringName() { return "TransportInformation"; }
void TransportInformation::Accept(IVisitor* iv) { iv->Visit(this); }