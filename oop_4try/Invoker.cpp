#include "Invoker.h"

void Invoker::Start() { ic->StartOperation(); }
void Invoker::End() { ic->EndOperation(); }
void Invoker::SetCommand(ICommand* ic) { this->ic = ic; }