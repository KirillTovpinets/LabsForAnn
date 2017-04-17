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
//		cout << "Введите данные " << i + 1 << "-го сотрудника" << endl;
//		cout << "Имя: ";
//		cin >> name;
//		cout << "Фамилия ";
//		cin >> fname;
//		cout << "Отчество: ";
//		cin >> patername;
//		cout << "Табельный номер: ";
//		cin >> tabNumber;
//		cout << "Количество отработанных часов: ";
//		cin >> numHours;
//		cout << "Почасовой тариф: ";
//		cin >> perHour;
//
//		staff[i] = *new Person(name, fname, patername, tabNumber, numHours, perHour);
//	}*/
//
//	staff[0] = *new Person("Кирилл", "Кириллов", "Кириллович", "01234", 120, 5.3);
//	staff[1] = *new Person("Пётр", "Петров", "Петрович", "01114", 153, 3.4);
//	staff[2] = *new Person("Фёдор", "Фёдоров", "Фёдорович", "12223", 132, 4.5);
//	staff[3] = *new Person("Семён", "Семёнов", "Семёнович", "01111",  128, 7.5);
//	staff[4] = *new Person("Валера", "Валерьев", "Валерьевич", "02334", 122, 5.6);
//	staff[5] = *new Person("Константин", "Константинов", "Константинович", "21234",  121, 4.1);
//	staff[6] = *new Person("Ян", "Янов", "Янович", "01233",  139, 8.4);
//	staff[7] = *new Person("Сергей", "Сергеев", "Сенгеевич", "01287",  123, 2.3);
//	staff[8] = *new Person("Кирилл", "Товпинец", "Александрович", "12341",  112, 9.13);
//	staff[9] = *new Person("Кирилл", "Товпинец", "Александрович", "12332",  180, 15.33);
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
//	cout << "Заработная плата сотрудника " << endl;
//	cout << "---------------------------------------------------------------------------" << endl;
//	cout << setw(15) << "Имя" << setw(15) << "Фамилия" << setw(15) << "Отчество" << setw(18) << "Табельный номер" << setw(10) << "Зарплата" << endl;
//	cout << "---------------------------------------------------------------------------" << endl;
//	for (int i = 0; i < NUMBER; i++)
//	{
//		cout << setw(15) << staff[i].getName() << setw(15) << staff[i].getFname() << setw(15) << staff[i].getPatername() << setw(18) << staff[i].getTabNumber() << setw(10) << staff[i].salary() << endl;
//	}
//}