#pragma once
#include "ISystem.h"
class RemoveInfoSystem :
    public ISystem
{
public:
    void doSomething();
    void returnName();
    string returnStringName();
    void Accept(IVisitor* iv);
};

