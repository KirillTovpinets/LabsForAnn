#include <iostream>
#include <Windows.h>
using namespace std;

void main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "¬ведите сумму дл€ выдачи: ";
	int inputValue;
	cin >> inputValue;

	int bank[5] = {1000, 5000, 10000, 20000, 50000};

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4 - i; j++)
		{
			if (bank[j] < bank[j + 1])
			{
				int temp = bank[j];
				bank[j] = bank[j + 1];
				bank[j + 1] = temp;
			}
		}
	}

	while (inputValue != 0)
	{
		for (int i = 0; i < sizeof(bank); i++)
		{
			if (inputValue >= bank[i])
			{
				cout << bank[i] << " ";
				inputValue -= bank[i];
				break;
			}
		}
	}
}