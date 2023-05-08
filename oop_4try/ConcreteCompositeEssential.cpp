#include "ConcreteCompositeEssential.h"

ConcreteCompositeEssential::ConcreteCompositeEssential() 
{
	LeafEssential* prop1 = new LeafEssential("Пропеллер1"); //Создание пропеллера 1
	LeafEssential* prop2 = new LeafEssential("Пропеллер2"); //Создание пропеллера 2
	LeafEssential* prop3 = new LeafEssential("Пропеллер3"); //Создание пропеллера 3
	LeafEssential* prop4 = new LeafEssential("Пропеллер4"); //Создание пропеллера 4
	LeafEssential* engine = new LeafEssential("Двигатель"); //Создание двигателя
	LeafEssential* stoi = new LeafEssential("Стойки");  //Создание стойки для посадки 
	this->Add(prop1); //Добавление пропеллера 1
	this->Add(prop2); //Добавление пропеллера 2
	this->Add(prop3); //Добавление пропеллера 3
	this->Add(prop4); //Добавление пропеллера 4
	this->Add(engine); //Добавление двигателя
	this->Add(stoi); //Добавление стойки для посадки
}