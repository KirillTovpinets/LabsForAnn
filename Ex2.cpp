/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
#include <string.h>
#include <cstring>
#define MAX_NUMBER_EXAM 10
#define STUD_NUMBER 8

using namespace std;

class Student{
    string name;
    string fname;
    int group;
    double avMark ;
    
    public: Student(){
        
    }
    public: Student(string name, string fname, int group, double avMark){
        this->name = name;
        this->fname = fname;
        this->group = group;
        this->avMark = avMark;
    }
    public: double getAvMark(){
        return this->avMark;
    }
    public: string getName(){
        return this->name;
    }
    public: string getFName(){
        return this->fname;
    }
    public: int getGroup(){
        return this->group;
    }
};

int main(){
    
    Student students[STUD_NUMBER];
    
//    for (int i = 0; i < STUD_NUMBER; i++) {
//        system("cls");
//        cout << "Введите данные " << i + 1 << "-го студента: " << endl;
//        string inputName;
//        cout << "Имя: ";
//        cin >> inputName;
//        string inputFname;
//        cout << "Фамилия: ";
//        cin >> inputFname;
//        int inputGroup;
//        cout << "Группа: ";
//        cin >> inputGroup;
//        double avMark = 0.0;
//        cout << "Введите средний балл студента: ";
//        cin >> avMark;
//        studList.group[i] = *new Student(inputName, inputFname, inputGroup, avMark);
//    }
    
    students[0] = *new Student("Кирилл", "Товпинец", 2, 10.0);
    students[0] = *new Student("Иннокентий", "Иванов", 3, 7.5);
    students[0] = *new Student("Петр", "Петров", 1, 6.3);
    students[0] = *new Student("Клара", "Кларовна", 3, 7.3);
    students[0] = *new Student("Клавдия", "Нечаева", 2, 6.3);
    students[0] = *new Student("Анна", "Быковская", 1, 7.8);
    students[0] = *new Student("Кондратий", "Валерьев", 3, 2.3);
    students[0] = *new Student("Константин", "Константинов", 2, 6.1);
    
    Student sortStudents[STUD_NUMBER][STUD_NUMBER];
    for (int i = 0; i < STUD_NUMBER-1; i++)
    {
        for (int j = 0; j < STUD_NUMBER - 1 - i; j++)
        {
            if (students[j].getGroup() > students[j + 1].getGroup()){
                Student temp = *new Student();
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
    int currentGroup = students[0].getGroup();
    int numGroups = 0;
    for(int i = 0; i < STUD_NUMBER; i++){
        if(currentGroup == students[i].getGroup()){
            sortStudents[numGroups][i] = students[i];
        }else{
            numGroups++;
            currentGroup = students[i].getGroup();
        }
    }
    
    for(int i = 0;i < numGroups; i++){
        for(int j = 0; j < sizeof(sortStudents[i]); j++){
            for(int k = 0; k < sizeof(sortStudents[i]) - 1 - j; k++){
                if(students[k].getFName() > students[k + 1].getFName()){
                    Student temp = *new Student();
                    temp = students[k];
                    students[k] = students[k + 1];
                    students[k + 1] = temp;
                }
            }
        }
    }
    
    for(int i = 0; i < numGroups; i++ ){
        cout << "Группа №" << i + 1;
        cout << "------------------------------------";
        for(int j = 0; j < sizeof(sortStudents[i]); j++){
            cout << sortStudents[i][j].getName() << " " 
                 << sortStudents[i][j].getFName() << " " 
                 << sortStudents[i][j].getAvMark() << endl;
        }
        cout << "------------------------------------";
    }
}