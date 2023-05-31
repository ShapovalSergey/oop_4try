#pragma once
#include "ICommand.h"
class Invoker
{
private:
	ICommand* ic;
public:
	void SetCommand(ICommand* ic);
	void Start ();
	void End();
};

