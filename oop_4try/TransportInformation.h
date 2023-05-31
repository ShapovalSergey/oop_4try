#pragma once
#include "ISystem.h"
class TransportInformation :
    public ISystem
{
public:
    void doSomething();
    void returnName();
    string returnStringName();
    void Accept(IVisitor* iv);
};

