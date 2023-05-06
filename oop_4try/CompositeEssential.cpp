#include "CompositeEssential.h"

bool CompositeEssential::mypred(string* s1, string* s2)
{
	return strcmp(s1->data(), s2->data()) != 0;
}

void CompositeEssential::Add(Essential* leaf) 
{
	children.push_back(leaf);
}
void CompositeEssential::Remove(Essential* leaf) 
{
	children.remove(leaf);
}

void CompositeEssential::Display() {
	for (list<Essential*>::iterator iter = children.begin(); iter != children.end(); iter++)
		(*iter)->Display();
	printf("\n");
}

void CompositeEssential::Composition() {
	for (list<Essential*>::iterator iter = children.begin(); iter != children.end(); iter++)
		(*iter)->Composition();
	printf("\n");
}
