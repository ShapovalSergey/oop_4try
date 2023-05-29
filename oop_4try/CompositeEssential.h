#pragma once
#include "Essential.h"
#include "Memento.h"
class CompositeEssential :
    public Essential
{
	list <Essential*> children;
	bool mypred(string* s1, string* s2);
public:
	void Add(Essential* leaf);
	void Remove(Essential* leaf);
	virtual void Display();
	virtual void Composition();
	Memento* SaveState();
	void RestoreState(Memento* m);
};

