#pragma once
#include "IVisitor.h"
class ConcreateVisitor :
    public IVisitor
{
public:
	 void Visit(CipherSystem* system) ;
	 void Visit(FlySystem* system) ;
	 void Visit(NeutrillizeSystem* system) ;
	 void Visit(OppositionSystem* system) ;
	 void Visit(RemoteAccessProxy* system) ;
	 void Visit(RemoteAccessSystem* system) ;
	 void Visit(RemoveInfoSystem* system) ;
	 void Visit(ScanSystem* system) ;
	 void Visit(StabillizeSystem* system) ;
	 void Visit(TargetDetectionSystem* system) ;
	 void Visit(TransportInformation* system) ;
	 void Visit(TransportSuppliesSystem* system) ;
};

