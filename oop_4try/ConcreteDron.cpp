#include "ConcreteDron.h"

ConcreteDron::ConcreteDron(string country, string model)
{
	SensorCreator* SC = new AccCreator();
	SensorCreator* SC1 = new BarCreator();
	SensorCreator* SC2 = new ComCreator();
	SensorCreator* SC3 = new GyrCreator();
	SensorCreator* SC4 = new TemCreator();
	vector<Sensor*> sen;
	sen.push_back(SC4->Create("T5-66-01"));
	sen.push_back(SC->Create("A1-09-31"));
	sen.push_back(SC1->Create("B2-09-09"));
	sen.push_back(SC3->Create("G3-98-67"));
	sen.push_back(SC2->Create("C4-01-90"));
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
		this->AddSensor(sen[i]);
	}
	this->AddSystem(CS); //-------------------------------------------
	this->AddSystem(FS); //
	this->AddSystem(NS); //
	this->AddSystem(OS); //
	this->AddSystem(RIS); //
	this->AddSystem(ScanS); //Добавлление систем к дрону
	this->AddSystem(StabS); //
	this->AddSystem(TDS); //
	this->AddSystem(TSS); //
	this->AddSystem(TIS); //
	this->AddSystem(RAS); //------------------------------------------
	RAS->GetSystems(this->ReturnSystems());
}