// Score.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

char CalculateScore(float totalNumber)
{
	char rank;
	if (totalNumber >= 9)
		rank = 'A';
	else if (totalNumber >= 7)
		rank = 'B';
	else if (totalNumber >= 5)
		rank = 'C';
	else
		rank = 'F';

	return rank;
	
}


int main()
{
	float examScore;
	float midExamScore;
	float finalExamScore;

	cout << "Enter Scores: " << endl;
	cout << "Exam Score: ";
	cin >> examScore;
	cout << "Mid Exam Score: ";
	cin >> midExamScore;
	cout << "Final Exam Score: ";
	cin >> finalExamScore;

	float totalScore = (examScore + midExamScore + finalExamScore) / 3;
	cout << "\nTotal Score = " << totalScore<<endl;
	cout << "You get an " << CalculateScore(totalScore);


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
