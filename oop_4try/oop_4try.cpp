// oop_4try.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#pragma once
//#include "Header.h"
#include "Facade.h"
#include "Sensors.h"
#include "Systems.h"
//#include "Dron.h"
#include "Cargos.h"
//#include "CompositeEssential.h"
#include "LeafEssential.h"




int main()
{
	setlocale(LC_ALL, "Russian");
	Dron* a = new Dron("Россия", "ФБВ-1"); //Создание Дрона
	Accelerator* acc = new Accelerator("A1-09-31"); // Создание датчика ускорения
	Barometr* bar = new Barometr("B2-09-09"); //Создание датчика высоты 
	Gyroscope* gyro = new Gyroscope("G3-98-67"); //Создание датчика угла наклона
	Compas* com = new Compas("C4-01-90"); // Создание датчика направления движения
	Temperature* t = new Temperature("T5-66-01"); //Создание датчика температуры
	Adapter* adp = new Adapter(t); //Созданиие адаптера для работы с независимым датчиком как с обычным
	vector<Sensor*> sen; 
	vector<Cargo*> car;
	sen.push_back(new Sensor(adp));
	sen.push_back(new Sensor(acc));
	sen.push_back(new Sensor(bar));
	sen.push_back(new Sensor(gyro));
	sen.push_back(new Sensor(com));
	DroneFrame* DF = new DroneFrame("Каркас",25); //Создание базового объекта - каркас дрона, к которому в последствии добавляются другие компоненты
	car.push_back(new DroneFrame("Каркас", 25));
	car.push_back(new Patrons(DF, "Патроны", 5));
	car.push_back(new Battery(DF, "Аккумулятор", 15));
	car.push_back(new Patrons(DF, "Патроны", 10));
	CompositeEssential CE; //Создание компоновщика необходдимых частей
	LeafEssential* prop1 = new LeafEssential("Пропеллер1"); //Создание пропеллера 1
	LeafEssential* prop2 = new LeafEssential("Пропеллер2"); //Создание пропеллера 2
	LeafEssential* prop3 = new LeafEssential("Пропеллер3"); //Создание пропеллера 3
	LeafEssential* prop4 = new LeafEssential("Пропеллер4"); //Создание пропеллера 4
	LeafEssential* engine = new LeafEssential("Двигатель"); //Создание двигателя
	LeafEssential* stoi = new LeafEssential("Стойки");  //Создание стойки для посадки 
	CE.Add(prop1); //Добавление пропеллера 1
	CE.Add(prop2); //Добавление пропеллера 2
	CE.Add(prop3); //Добавление пропеллера 3
	CE.Add(prop4); //Добавление пропеллера 4
	CE.Add(engine); //Добавление двигателя
	CE.Add(stoi); //Добавление стойки для посадки
	CipherSystem* CS = new CipherSystem; //Создание системы шифрования
	FlySystem* FS = new FlySystem; //Создание системы управления поллетом
	NeutrillizeSystem* NS = new NeutrillizeSystem; //Создание системы уничтожения цели
	OppositionSystem* OS = new OppositionSystem; //Создание системы противодействия перехвату
	RemoveInfoSystem* RIS = new RemoveInfoSystem; //Создание системы удаления информации
	ScanSystem* ScanS = new ScanSystem; //Создание системы сканирования
	StabillizeSystem* StabS = new StabillizeSystem; //Создание системы стабилизации полета
	TargetDetectionSystem* TDS = new TargetDetectionSystem; //Создание системы определения цели
	TransportSuppliesSystem* TSS = new TransportSuppliesSystem; //Создание системы доставки груза
	TransportInformation* TIS = new TransportInformation; //Создание системы передачи информации 
	RemoteAccessProxy* RAS = new RemoteAccessProxy; //Создание системы удаленного доступа с использованием класса-заместителя (proxy)
	for (int i = 0; i < sen.size(); i++)
	{
		a->AddSensor(sen[i]);
	}
	a->AddSystem(CS); //-------------------------------------------
	a->AddSystem(FS); //
	a->AddSystem(NS); //
	a->AddSystem(OS); //
	a->AddSystem(RIS); //
	a->AddSystem(ScanS); //Добавлление систем к дрону
	a->AddSystem(StabS); //
	a->AddSystem(TDS); //
	a->AddSystem(TSS); //
	a->AddSystem(TIS); //
	a->AddSystem(RAS); //------------------------------------------
	
	
	
	Facade* f = new Facade(a,DF,CE,sen,car);
	int mode = 0;
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
			RAS->GetSystems(a->ReturnSystems());
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
