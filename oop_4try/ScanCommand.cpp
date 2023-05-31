#include "ScanCommand.h"

void ScanCommand::StartOperation() 
{
	ss->StartScanning(time);
}
void ScanCommand::EndOperation()
{
	ss->StopScanning();
}
void ScanCommand::SetTime(int time)
{
	this->time = time;
}

void ScanCommand::SetSystem(ScanSystem* ss) { this->ss = ss; }