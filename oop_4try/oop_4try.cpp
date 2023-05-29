// oop_4try.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#pragma once
//#include "Header.h"
#include "Patron_7x62.h"
#include "Facade.h"
#include "Sensors.h"
#include "ArmyDronFactory.h"
#include "Creators.h"
#include "Systems.h"
//#include "Dron.h"
#include "Cargos.h"
//#include "CompositeEssential.h"
#include "LeafEssential.h"
#include "SysLog.h"
#include "Caretaker.h"



int main()
{

	ArmyDronFactory* a = new ArmyDronFactory();
	TDron* td = a->createDron("Россия", "ФБВ-1");
	setlocale(LC_ALL, "Russian");

	CompositeEssential* ce1 = new CompositeEssential();
	LeafEssential* prop1 = new LeafEssential("Пропеллер1"); //Создание пропеллера 1
	LeafEssential* prop2 = new LeafEssential("Пропеллер2"); //Создание пропеллера 2
	LeafEssential* engine = new LeafEssential("Двигатель"); //Создание двигателя
	LeafEssential* stoi = new LeafEssential("Стойки");  //Создание стойки для посадки 
	LeafEssential* leftwing = new LeafEssential("Левое крыло");  //Создание стойки для посадки 
	LeafEssential* rightwing = new LeafEssential("Правое крыло");  //Создание стойки для посадки 
	ce1->Add(prop1);
	ce1->Add(prop2);
	ce1->Add(engine);
	ce1->Add(stoi);
	ce1->Add(leftwing);
	ce1->Add(rightwing);


	vector<Cargo*> car;
	DroneFrame* DF = new DroneFrame("Каркас",25); //Создание базового объекта - каркас дрона, к которому в последствии добавляются другие компоненты
	car.push_back(new DroneFrame("Каркас", 25));
	car.push_back(new Patrons(DF, "Патроны", 5));
	car.push_back(new Battery(DF, "Аккумулятор", 15));
	car.push_back(new Patrons(DF, "Патроны", 10));
	

	SysLog* s = SysLog::Instance("Системный журнал1");
	SysLog* d = SysLog::Instance("Системный журнал2");

	s->run();
	d->run();

	Patron_7x62* p1 = new Patron_7x62();

	vector<Patron*> mag;
	for (int i = 0; i < 30; i++)
	{
		mag.push_back(p1->clone());
	}
	for (int i = 0; i < 30; i++)
	{
		mag[i]->ReturnInfo();
	}




	Caretaker* ct=new Caretaker();
	Facade* f = new Facade(td,DF,car);
	int mode = 0,counter=0;
	while (mode!=5)
	{
		printf("Выберите, что вы хотите сделать\n1)Получить информацию с датчиков\n2)Получить информацию о деталях\n3)Получить информацию о грузах\n4)Подключиться удаленно к дрону\n5)Завершить работу\n");
		scanf("%d", &mode); 
		if (mode==1)
		{
			for (int i = 0; i < f->RetSenSize(); i++)
			{
				f->GetSensorInfo(i);
			}
		}
		else if (mode==2)
		{
			ct->AddState(f->RetCE()->SaveState());
			printf("Начальное состояние\n");
			f->GetEssentialInfo();
			f->SetEssentials(ce1);
			printf("Измененное состояние\n");
			f->GetEssentialInfo();
			f->RetCE()->RestoreState(ct->GetState(0));
			printf("Восстановленное первоначальное состояние\n");
			f->GetEssentialInfo();
		}
		else if (mode == 3)
		{
			for (int i = 0; i < f->RetCarSize(); i++)
			{
				f->GetCargoInfo(i);
			}
		}
		else if (mode == 4)
		{
			f->DronActivateSystem(10);
		}
	}
	
	
	
	_getch();
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
