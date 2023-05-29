#pragma once
#include "Essential.h"
class Memento
{
private: 
	list <Essential*> children;
public: 
	Memento(list <Essential*>children);
	list <Essential*> GetList();
};

