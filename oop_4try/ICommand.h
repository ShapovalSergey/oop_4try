#pragma once
class ICommand
{
public: 
	virtual void StartOperation() = 0;
	virtual void EndOperation() = 0;
};

