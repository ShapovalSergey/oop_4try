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
	CipherSystem* CS = new CipherSystem; //�������� ������� ����������
	FlySystem* FS = new FlySystem; //�������� ������� ���������� ��������
	NeutrillizeSystem* NS = new NeutrillizeSystem; //�������� ������� ����������� ����
	OppositionSystem* OS = new OppositionSystem; //�������� ������� ��������������� ���������
	RemoveInfoSystem* RIS = new RemoveInfoSystem; //�������� ������� �������� ����������
	ScanSystem* ScanS = new ScanSystem; //�������� ������� ������������
	StabillizeSystem* StabS = new StabillizeSystem; //�������� ������� ������������ ������
	TargetDetectionSystem* TDS = new TargetDetectionSystem; //�������� ������� ����������� ����
	TransportSuppliesSystem* TSS = new TransportSuppliesSystem; //�������� ������� �������� �����
	TransportInformation* TIS = new TransportInformation; //�������� ������� �������� ���������� 
	RemoteAccessProxy* RAS = new RemoteAccessProxy; //�������� ������� ���������� ������� � �������������� ������-����������� (proxy)
	for (int i = 0; i < sen.size(); i++)
	{
		this->AddSensor(sen[i]);
	}
	this->AddSystem(CS); //-------------------------------------------
	this->AddSystem(FS); //
	this->AddSystem(NS); //
	this->AddSystem(OS); //
	this->AddSystem(RIS); //
	this->AddSystem(ScanS); //����������� ������ � �����
	this->AddSystem(StabS); //
	this->AddSystem(TDS); //
	this->AddSystem(TSS); //
	this->AddSystem(TIS); //
	this->AddSystem(RAS); //------------------------------------------
	RAS->GetSystems(this->ReturnSystems());
}