#include "ConcreteCompositeEssential.h"

ConcreteCompositeEssential::ConcreteCompositeEssential() 
{
	LeafEssential* prop1 = new LeafEssential("���������1"); //�������� ���������� 1
	LeafEssential* prop2 = new LeafEssential("���������2"); //�������� ���������� 2
	LeafEssential* prop3 = new LeafEssential("���������3"); //�������� ���������� 3
	LeafEssential* prop4 = new LeafEssential("���������4"); //�������� ���������� 4
	LeafEssential* engine = new LeafEssential("���������"); //�������� ���������
	LeafEssential* stoi = new LeafEssential("������");  //�������� ������ ��� ������� 
	this->Add(prop1); //���������� ���������� 1
	this->Add(prop2); //���������� ���������� 2
	this->Add(prop3); //���������� ���������� 3
	this->Add(prop4); //���������� ���������� 4
	this->Add(engine); //���������� ���������
	this->Add(stoi); //���������� ������ ��� �������
}