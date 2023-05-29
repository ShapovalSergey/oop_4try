#include "Memento.h"

Memento::Memento(list <Essential*>children) { this->children = children; };
list <Essential*> Memento::GetList() { return this->children; };