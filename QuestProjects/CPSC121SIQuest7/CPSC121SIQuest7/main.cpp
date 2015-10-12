/*
Sae Hun Kim
CPSC 121 SI Quest 7

Grade Calculator
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	// Declare variables
	const int MAX_STUDENTS = 3;
	string student[MAX_STUDENTS];
	float grade[MAX_STUDENTS];
	float classAverage = 0.0;

	// Get students and grades and class average
	for (int i = 0; i < MAX_STUDENTS; i++) {
		cout << "Enter first student's name: ";
		cin >> student[i];
		cout << "Enter first student's grade: ";
		cin >> grade[i];
	}
	cout << "Enter the class average: ";
	cin >> classAverage;
	cout << endl;

	// Display Students and Grades
	for (int i = 0; i < MAX_STUDENTS; i++) {
		if (grade[i] > classAverage) {
			cout << student[i] << "'s grade is greater than the class average." << endl;
		}
		else if (grade[i] == classAverage) {
			cout << student[i] << "'s grade is equal the class average." << endl;
		}
		else if (grade[i] < classAverage) {
			cout << student[i] << "'s grade is less than the class average." << endl;
		}
	}

	// Pause the system
	system("pause");
	return 0;
}