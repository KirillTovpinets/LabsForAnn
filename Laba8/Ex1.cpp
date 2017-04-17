//#include <iostream>
//#include <string>
//#include <Windows.h>
//#define MAX_NUMBER_EXAM 10
//#define STUD_NUMBER 5
//
//using namespace std;
//
//class Student{
//    string name;
//    string fname;
//    string patername;
//    int age;
//    int results[MAX_NUMBER_EXAM];
//    
//    Student(){
//        
//    }
//    public: Student(string name, string fname, string patername, int age, int marks[]){
//        this->name = name;
//        this->fname = fname;
//        this->patername = patername;
//        this->age = age;
//		for (int i = 0; i < sizeof(marks); i++)
//		{
//			this->results[i] = marks[i];
//		}
//    }
//    public: void getAllMarks(int numExam){
//        cout << endl << "������ ��������: ";
//        for(int i = 0; i < numExam; i++){
//            cout << results[i];
//			if (i < (numExam - 1))
//			{
//				cout  << ", ";
//			}
//        }
//		cout << endl << endl;
//    }
//    public: void setMarks(int numExam){
//        for(int i = 0; i < numExam; i++){
//            this->results[i] = rand() % 10 + 1;
//        }
//    }
//    public: string getName(){
//        return name;
//    }
//    public: string getFName(){
//        return fname;
//    }
//    public: string getPName(){
//        return patername;
//    }
//    public: int getAge(){
//        return age;
//    }
//    public: double AvarageMark(int numExams){
//        double avMark = 0.0;
//        int sum = 0;
//        for(int i = 0;i < numExams; i++){
//            sum += this->results[i];
//        }
//        avMark = static_cast<double>(sum)/static_cast<double>(numExams);
//        return avMark;
//    }
//    friend class List;
//};
//
//class List{
//    public: Student group[STUD_NUMBER];
//    public: int groupNumber;
//    public: int courseNumber;
//    
//    List(int group, int course){
//        this->groupNumber = group;
//        this->courseNumber = course;
//        for (int i = 0; i < STUD_NUMBER; i++) {
//            this->group[i] = *new Student();
//        }
//    }
//    
//    
//};
//
//int main(){
//    
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//    List studList = *new List(1,2);
//    string Disc[] = {"���","����","�����","��","��","W����","�����","�����","��","��"};
//    int marks[MAX_NUMBER_EXAM];
//    cout << "������� ���������� ���������: ";
//    int numExam = 0;
//    cin >> numExam;
//    
////    for (int i = 0; i < STUD_NUMBER; i++) {
////        system("cls");
////        cout << "������� ������ " << i + 1 << "-�� ��������: " << endl;
////        string inputName;
////        cout << "���: ";
////        cin >> inputName;
////        string inputFname;
////        cout << "�������: ";
////        cin >> inputFname;
////        string inputPatername;
////        cout << "��������: ";
////        cin >> inputPatername;
////        int inputAge;
////        cout << "�������: ";
////        cin >> inputAge;
////        cout << "��������� ������������ ��������:" << endl;
////        for (int j = 0; j < numExam; j++) {
////            cout << Disc[j] << ": ";
////            cin >> marks[j];
////        }
////        studList.group[i] = *new Student(inputName, inputFname, inputPatername, inputAge, marks);
////    }
//    
//	for(int i = 0; i < numExam; i++){
//        marks[i] = rand() % 10 + 1;
//    }
//    studList.group[0] = *new Student("������", "��������", "�������������", 22, marks);
//    
//	for(int i = 0; i < numExam; i++){
//        marks[i] = rand() % 10 + 1;
//    }
//    studList.group[1] = *new Student("����", "���������", "����������", 19, marks);
//    
//	for(int i = 0; i < numExam; i++){
//        marks[i] = rand() % 10 + 1;
//    }
//
//    studList.group[2] = *new Student("�����", "�������", "�������������", 12, marks);
//    
//	for(int i = 0; i < numExam; i++){
//        marks[i] = rand() % 10 + 1;
//    }
//
//    studList.group[3] = *new Student("����", "������", "��������", 19, marks);
//    
//	for(int i = 0; i < numExam; i++){
//        marks[i] = rand() % 10 + 1;
//    }
//    studList.group[4] = *new Student("����", "���������", "��������", 20, marks);
//    
//	for(int i = 0; i < STUD_NUMBER; i++){
//		cout.precision(2);
//        cout << "������� ���� �������� " << studList.group[i].getName() << " "
//                                         << studList.group[i].getFName() << " " 
//                                         << studList.group[i].getPName() << " � �������� "
//                                         << studList.group[i].getAge() << " ���: " 
//                                         << studList.group[i].AvarageMark(numExam) << endl;
//        studList.group[i].getAllMarks(numExam);
//    }
//}