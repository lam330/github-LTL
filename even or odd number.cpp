// even or odd number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<conio.h>
using namespace std;

void CheckNumber(const int&number)// kiem tra chan le
{
	if (number % 2 == 0)
		cout << number << " is even number";
	else
		cout << number << " is odd number";
}

int main()
{
	int number;
	char key = _getch();
	while (int(key) != 27)
	{
		cout << "\nEnter number: ";
		cin >> number;

		CheckNumber(number);

		key = _getch();
	}
	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
