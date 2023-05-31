#include "TargetDetectionSystem.h"
#include "IVisitor.h"
void TargetDetectionSystem::doSomething()
{
	printf("Определяет цель\n");
};

void TargetDetectionSystem::returnName()
{
	printf("TargetDetection");
};

string TargetDetectionSystem::returnStringName() { return "TargetDetection"; }
void TargetDetectionSystem::Accept(IVisitor* iv) { iv->Visit(this); }