#include <iostream>
#include <string>
#include <Windows.h>

#define MAX_LENGTH 100
#define MAX_NUMBER 10
using namespace std;

class Good
{
	string name;
	string artic;
	string firmName;
	double price;
	int numDays;
public:
	Good(string name, string artic, string firmName, double price, int numDays){
		this->name = name;
		this->artic = artic;
		this->firmName = firmName;
		this->price = price;
		this->numDays = numDays;
	}

	void setName(string name){
		this->name = name;
	}
	void setArtic(string article){
		this->artic = article;
	}
	void setFirmName(string firmName){
		this->firmName = firmName;
	}
	void setPrice(double price){
		this->price = price;
	}
	void setNumDays(int numDays){
		this->numDays = numDays;
	}

	string getName(){
		return this->name;
	}
	string getArtic(){
		return this->artic;
	}
	string getFirmName(){
		return this->firmName;
	}
	double getPrice(){
		return this->numDays;
	}
	int getNumDays(){
		return this->numDays;
	}
};
void main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


}