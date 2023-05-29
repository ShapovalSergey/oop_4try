#include "Caretaker.h"

void Caretaker::AddState(Memento* m) { states.push_back(m); }
Memento* Caretaker::GetState(int index) { return states[index]; }