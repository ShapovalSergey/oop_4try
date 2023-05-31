#pragma once
#include "Systems.h"
class IVisitor
{
public:
	virtual void Visit(CipherSystem* system) = 0;
	virtual void Visit(FlySystem* system) = 0;
	virtual void Visit(NeutrillizeSystem* system) = 0;
	virtual void Visit(OppositionSystem* system) = 0;
	virtual void Visit(RemoteAccessProxy* system) = 0;
	virtual void Visit(RemoteAccessSystem* system) = 0;
	virtual void Visit(RemoveInfoSystem* system) = 0;
	virtual void Visit(ScanSystem* system) = 0;
	virtual void Visit(StabillizeSystem* system) = 0;
	virtual void Visit(TargetDetectionSystem* system) = 0;
	virtual void Visit(TransportInformation* system) = 0;
	virtual void Visit(TransportSuppliesSystem* system) = 0;
};

