#pragma once
#include "Memento.h"
class Caretaker
{
private:
	vector<Memento*> states;
public:
	Caretaker() {};
	void AddState(Memento* m);
	Memento* GetState(int index);
};

