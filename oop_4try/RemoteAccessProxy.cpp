#include "RemoteAccessProxy.h"
#include "IVisitor.h"
RemoteAccessProxy::RemoteAccessProxy()
{
	RealObject = new RemoteAccessSystem;
}

void RemoteAccessProxy::doSomething()
{
	char password[100];
	printf("Введите пароль\n");
	scanf_s("%s", &password, 100);
	if (strcmp(password, "123") == 0)
	{
		RealObject->doSomething();
	}
	else
	{
		printf("Отказано в доступе\n");
	}
}

void RemoteAccessProxy::returnName()
{
	printf("RemoteAccessSystemProxy");
};

void RemoteAccessProxy::GetSystems(vector<ptrSystem> System) {
	char password[100];
	printf("Введите пароль\n");
	scanf_s("%s", &password, 100);
	if (strcmp(password, "123") == 0)
	{
		RealObject->GetSystems(System);
	}
	else
	{
		printf("Отказано в доступе\n");
	}
};

RemoteAccessProxy::~RemoteAccessProxy()
{
	delete RealObject;
};

string RemoteAccessProxy::returnStringName() { return "RemoteAccessProxy"; }
void RemoteAccessProxy::Accept(IVisitor* iv) { iv->Visit(this); }