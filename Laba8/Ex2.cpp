///*
// * To change this license header, choose License Headers in Project Properties.
// * To change this template file, choose Tools | Templates
// * and open the template in the editor.
// */
//
//#include <iostream>
//#include <string>
//#include <Windows.h>
//#define MAX_NUMBER_EXAM 10
//#define STUD_NUMBER 8
//
//using namespace std;
//
//class Student{
//    string name;
//    string fname;
//    int group;
//    double avMark ;
//    
//    public: Student(){
//        
//    }
//    public: Student(string name, string fname, int group, double avMark){
//        this->name = name;
//        this->fname = fname;
//        this->group = group;
//        this->avMark = avMark;
//    }
//    public: double getAvMark(){
//        return this->avMark;
//    }
//    public: string getName(){
//        return this->name;
//    }
//    public: string getFName(){
//        return this->fname;
//    }
//    public: int getGroup(){
//        return this->group;
//    }
//};
//
//int main(){
//    SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//    Student students[STUD_NUMBER];
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
////        int inputGroup;
////        cout << "������: ";
////        cin >> inputGroup;
////        double avMark = 0.0;
////        cout << "������� ������� ���� ��������: ";
////        cin >> avMark;
////        studList.group[i] = *new Student(inputName, inputFname, inputGroup, avMark);
////    }
//    
//    students[0] = *new Student("������", "��������", 2, 10.0);
//    students[1] = *new Student("����������", "������", 3, 7.5);
//    students[2] = *new Student("����", "������", 1, 6.3);
//    students[3] = *new Student("�����", "��������", 3, 7.3);
//    students[4] = *new Student("�������", "�������", 2, 6.3);
//    students[5] = *new Student("����", "���������", 1, 7.8);
//    students[6] = *new Student("���������", "��������", 3, 2.3);
//    students[7] = *new Student("����������", "������������", 2, 6.1);
//    
//    Student sortStudents[STUD_NUMBER][STUD_NUMBER];
//    for (int i = 0; i < STUD_NUMBER-1; i++)
//    {
//        for (int j = 0; j < STUD_NUMBER - 1 - i; j++)
//        {
//            if (students[j].getGroup() > students[j + 1].getGroup()){
//                Student temp = *new Student();
//                temp = students[j];
//                students[j] = students[j + 1];
//                students[j + 1] = temp;
//            }
//        }
//    }
//    int currentGroup = students[0].getGroup();
//    int numGroups = 0;
//	int numStud = 0;
//	int numPerGroups[STUD_NUMBER];
//
//    for(int i = 0; i < STUD_NUMBER; i++){
//        if(currentGroup == students[i].getGroup()){
//            sortStudents[numGroups][numStud++] = students[i];
//        }else{
//			numPerGroups[numGroups] = numStud;
//            numGroups++;
//			numStud = 0;
//            currentGroup = students[i].getGroup();
//			sortStudents[numGroups][numStud++] = students[i];
//        }
//    }
//    numPerGroups[numGroups] = numStud;
//
//    for(int i = 0;i <= numGroups; i++){
//        for(int j = 0; j < numPerGroups[i] - 1; j++){
//
//            for(int k = 0; k < numPerGroups[i] - 1 - j; k++){
//                if(sortStudents[i][k].getFName() > sortStudents[i][k + 1].getFName()){
//                    Student temp = *new Student();
//                    temp = sortStudents[i][k];
//                    sortStudents[i][k] = sortStudents[i][k + 1];
//                    sortStudents[i][k + 1] = temp;
//                }
//            }
//        }
//    }
//    
//    for(int i = 0; i <= numGroups; i++ ){
//        cout << "������ �" << i + 1 << endl;
//        cout << "------------------------------------" << endl;
//        for(int j = 0; j < numPerGroups[i]; j++){
//            cout << sortStudents[i][j].getName() << " " 
//                 << sortStudents[i][j].getFName() << " " 
//                 << sortStudents[i][j].getAvMark() << endl;
//        }
//        cout << "------------------------------------" << endl;
//    }
//}