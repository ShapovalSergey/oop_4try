#include "NeutrillizeSystem.h"
#include "IVisitor.h"
void NeutrillizeSystem::doSomething()
{
	int mode;
	IState* is1 = new StateGun();
	IState* is2 = new StateRocket();
	printf("Выберите оружие для устранения (1 - огнестрельное, 2 - ракета)\n");
	scanf("%d",&mode);
	if (mode==1)
	{
		this->ChangeState(is1);
		is->dosomething();
	}
	else if (mode == 2)
	{
		this->ChangeState(is2);
		is->dosomething();
	}
}

void NeutrillizeSystem::returnName()
{
	printf("Neutrilizing");
}
void NeutrillizeSystem::ChangeState(IState* is) 
{
	this->is = is;
}

string NeutrillizeSystem::returnStringName() { return "Neutrillize"; }
void NeutrillizeSystem::Accept(IVisitor* iv) { iv->Visit(this); }