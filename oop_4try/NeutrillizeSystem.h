#pragma once
#include "ISystem.h"
#include "IState.h"
#include "StateGun.h"
#include "StateRocket.h"
class NeutrillizeSystem :
	public ISystem
{
	IState* is;
public:
	void doSomething();
	void returnName();
	void ChangeState(IState* is);
};

