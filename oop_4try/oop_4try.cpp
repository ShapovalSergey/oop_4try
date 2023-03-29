// oop_4try.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#pragma once
#include "Header.h"
#include "Sensors.h"
#include "Systems.h"
#include "Dron.h"


int main()
{
	setlocale(LC_ALL, "Russian");
	Dron* a = new Dron("Россия", "ФБВ-1"); //Создание Дрона
	Accelerator* acc = new Accelerator; // Создание датчика ускорения
	Barometr* bar = new Barometr; //Создание датчика высоты 
	Gyroscope* gyro = new Gyroscope; //Создание датчика угла наклона
	Compas* com = new Compas; // Создание датчика направления движения
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
	a->AddSensor(acc); //-----------------------------
	a->AddSensor(bar); //Добавление датчиков к дрону
	a->AddSensor(gyro); //
	a->AddSensor(com); //-----------------------------
	a->GetSensorInfo(0); //+++++++++++++++++++++++++++++++++++++++
	a->GetSensorInfo(1); //Вывод информации с датчиков на экран
	a->GetSensorInfo(2); //
	a->GetSensorInfo(3); //+++++++++++++++++++++++++++++++++++++++
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
	RAS->GetSystems(a->ReturnSystems()); //Получение системой удаленного доступа информации о доступных системах дрона
	a->ActivateSystem(10); //Активирование системы удаленного доступа
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
