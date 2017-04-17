//#include <iostream>
//#include <Windows.h>
//#include <string>
//#include <iomanip>
//
//#define NUMBER 10
//
//using namespace std;
//
//class Person
//{
//	string name;
//	string fname;
//	string patername;
//	string tabNumber;
//	int workHours;
//	double perHour;
//public:
//	Person(){
//	
//	}
//
//	Person(string name, string fname, string patername, string tabNumber, int wH, double pH){
//		this->name = name;
//		this->fname = fname;
//		this->patername = patername;
//		this->tabNumber = tabNumber;
//		this->workHours = wH;
//		if (workHours > 144)
//		{
//			this->perHour = pH * 2;
//		}else{
//			this->perHour = pH;
//		}
//	}
//
//	string getName(){
//		return this->name;
//	}
//	string getFname(){
//		return this->fname;
//	}
//	string getPatername(){
//		return this->patername;
//	}
//	string getTabNumber(){
//		return this->tabNumber;
//	}
//	int getWorkHours(){
//		return this->workHours;
//	}
//	double getPerHour(){
//		return this->perHour;
//	}
//
//
//	void setName(string name){
//		this->name = name;
//	}
//	void setFname(string fname){
//		this->fname = fname;
//	}
//	void setPatername(string patername){
//		this->patername = patername;
//	}
//	void setTabNumber(string tabnumber){
//		this->tabNumber = tabnumber;
//	}
//	void setWorkHours(int workHours){
//		this->workHours = workHours;
//	}
//	void setPerHour(double perHour){
//		this->perHour = perHour;
//	}
//
//	double salary(){
//		double fee = static_cast<double>(this->workHours)*this->perHour*0.12;
//		return static_cast<double>(this->workHours)*this->perHour - fee;
//	}
//};
//
//void main(){
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//	Person staff[NUMBER];	
//	/*for (int i = 0; i < NUMBER; i++)
//	{
//		string name;
//		string fname;
//		string patername;
//		string tabNumber;
//		int numHours;
//		int perHour;
//		cout << "������� ������ " << i + 1 << "-�� ����������" << endl;
//		cout << "���: ";
//		cin >> name;
//		cout << "������� ";
//		cin >> fname;
//		cout << "��������: ";
//		cin >> patername;
//		cout << "��������� �����: ";
//		cin >> tabNumber;
//		cout << "���������� ������������ �����: ";
//		cin >> numHours;
//		cout << "��������� �����: ";
//		cin >> perHour;
//
//		staff[i] = *new Person(name, fname, patername, tabNumber, numHours, perHour);
//	}*/
//
//	staff[0] = *new Person("������", "��������", "����������", "01234", 120, 5.3);
//	staff[1] = *new Person("ϸ��", "������", "��������", "01114", 153, 3.4);
//	staff[2] = *new Person("Ը���", "Ը�����", "Ը�������", "12223", 132, 4.5);
//	staff[3] = *new Person("����", "������", "��������", "01111",  128, 7.5);
//	staff[4] = *new Person("������", "��������", "����������", "02334", 122, 5.6);
//	staff[5] = *new Person("����������", "������������", "��������������", "21234",  121, 4.1);
//	staff[6] = *new Person("��", "����", "������", "01233",  139, 8.4);
//	staff[7] = *new Person("������", "�������", "���������", "01287",  123, 2.3);
//	staff[8] = *new Person("������", "��������", "�������������", "12341",  112, 9.13);
//	staff[9] = *new Person("������", "��������", "�������������", "12332",  180, 15.33);
//
//	for (int i = 0; i < NUMBER - 1; i++)
//	{
//		for (int j = 0; j < NUMBER - 1 - i; j++)
//		{
//			if (staff[j].getFname() > staff[j + 1].getFname())
//			{
//				Person temp = *new Person();
//				temp = staff[j];
//				staff[j] = staff[j + 1];
//				staff[j + 1] = temp;
//			}
//		}
//	}
//
//	cout << "���������� ����� ���������� " << endl;
//	cout << "---------------------------------------------------------------------------" << endl;
//	cout << setw(15) << "���" << setw(15) << "�������" << setw(15) << "��������" << setw(18) << "��������� �����" << setw(10) << "��������" << endl;
//	cout << "---------------------------------------------------------------------------" << endl;
//	for (int i = 0; i < NUMBER; i++)
//	{
//		cout << setw(15) << staff[i].getName() << setw(15) << staff[i].getFname() << setw(15) << staff[i].getPatername() << setw(18) << staff[i].getTabNumber() << setw(10) << staff[i].salary() << endl;
//	}
//}