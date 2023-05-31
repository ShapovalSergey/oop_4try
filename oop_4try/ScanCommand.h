#pragma once
#include "ICommand.h"
#include "ScanSystem.h"
class ScanCommand :
    public ICommand
{
private: 
    ScanSystem* ss;
    int time;
public:
         void SetSystem(ScanSystem* ss);
         void SetTime(int time);
         void StartOperation();
         void EndOperation();
};

