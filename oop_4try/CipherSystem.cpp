#include "CipherSystem.h"
#include "IVisitor.h"
void CipherSystem::doSomething()
{
	printf("������������� ����������\n");
}
void CipherSystem::returnName()
{
	printf("Cipher");
}
string CipherSystem::returnStringName() { return "Cipher"; }
void CipherSystem::Accept(IVisitor* iv) { iv->Visit(this); }