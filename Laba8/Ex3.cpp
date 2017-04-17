//#include <iostream>
//#include <string>
//#include <Windows.h>
//#include <iomanip>
//
//#define MAX_LENGTH 100
//#define MAX_NUMBER 10
//using namespace std;
//
//class Good
//{
//	string name;
//	string artic;
//	string firmName;
//	double price;
//	int numDays;
//public:
//	Good(){
//	
//	}
//	Good(string name, string artic, string firmName, double price, int numDays){
//		this->name = name;
//		this->artic = artic;
//		this->firmName = firmName;
//		this->price = price;
//		this->numDays = numDays;
//	}
//
//	void setName(string name){
//		this->name = name;
//	}
//	void setArtic(string article){
//		this->artic = article;
//	}
//	void setFirmName(string firmName){
//		this->firmName = firmName;
//	}
//	void setPrice(double price){
//		this->price = price;
//	}
//	void setNumDays(int numDays){
//		this->numDays = numDays;
//	}
//
//	string getName(){
//		return this->name;
//	}
//	string getArtic(){
//		return this->artic;
//	}
//	string getFirmName(){
//		return this->firmName;
//	}
//	double getPrice(){
//		return this->numDays; 
//	}
//	int getNumDays(){
//		return this->numDays;
//	}
//
//	double getDiscount(){
//		return this->price - this->price*0.2;
//	}
//};
//void main(){
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//	Good factory[MAX_NUMBER];
//
//	/*for (int i = 0; i < MAX_NUMBER; i++)
//	{
//		string name;
//		string artic;
//		string firmName;
//		double price;
//		int numDays;
//
//		cout << "������� ��������� " << i + 1 << "-�� ��������: ";
//		cin >> name;
//		cout << "������� ������� ��������: ";
//		cin >> artic;
//		cout << "������� �������� �����: ";
//		cin >> firmName;
//		cout << "������� ����: ";
//		cin >> price;
//		cout << "������� ���������� ���� ��������: ";
//		cin >> numDays;
//
//		factory[i] = *new Good(name, artic, firmName, price, numDays);
//	}*/
//
//	factory[0] = *new Good("��������", "67502-��", "��� �������", 8.5, 20);
//	factory[1] = *new Good("��������-2", "19502-��", "��� �������", 6.3, 18);
//	factory[2] = *new Good("��������", "29502-���", "��� �������", 1.5, 17);
//	factory[3] = *new Good("��������-2", "59522-��", "��� �������", 8.3, 17);
//	factory[4] = *new Good("��������", "52502-��", "��� �������", 12.5, 30);
//	factory[5] = *new Good("��������", "11502-���", "��� �������", 11.3, 29);
//	factory[6] = *new Good("��������", "567602-���", "��� �������", 18.8, 60);
//	factory[7] = *new Good("��������", "59332-���", "��� �������", 9.7, 10);
//	factory[8] = *new Good("��������", "11502-�����", "��� �������", 17.3, 30);
//	factory[9] = *new Good("��������-2", "11502-�����", "��� �������", 17.3, 70);
//	
//
//	for (int i = 0; i < MAX_NUMBER - 1; i++)
//	{
//		for (int j = 0; j < MAX_NUMBER - 1 - i; j++)
//		{
//			if (factory[j].getNumDays() > factory[j + 1].getNumDays())
//			{
//				Good temp = *new Good();
//				temp = factory[j];
//				factory[j] = factory[j + 1];
//				factory[j + 1] = temp;
//			}
//		}
//	}
//
//	cout << "������ �� ������ �������� ������ 20 ���� " << endl;
//	cout << "--------------------------------------------------------------------------" << endl;
//	cout << setw(13) << "��������" << setw(12) << "�������" << setw(23) << "�������� �����������" << setw(10) << "����"  << setw(15) << "���� ��������" << endl;
//	cout << "--------------------------------------------------------------------------" << endl;
//
//	for (int i = 0; i < MAX_NUMBER; i++)
//	{
//		if(factory[i].getNumDays() > 20){
//			cout << setw(13) << factory[i].getName() 
//				 << setw(12) << factory[i].getArtic() 
//				 << setw(23) << factory[i].getFirmName() 
//				 << setw(10) << factory[i].getDiscount() 
//				 << setw(15) << factory[i].getNumDays()
//				 << endl;
//		}
//	}
//	cout << "--------------------------------------------------------------------------" << endl;
//}