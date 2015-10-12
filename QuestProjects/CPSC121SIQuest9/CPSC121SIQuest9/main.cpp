/*
Sae Hun Kim
CPSC 121 SI Quest 9

Calculator
*/

#include <iostream>
using namespace std;

int main() {
	// Declare Variables
	float num1 = 0, num2 = 0, answer = 0;
	char input = '\0';

	// Get input
	cout << "Input one integer: ";
	cin >> num1;
	cout << "Input another number: ";
	cin >> num2;
	cout << "Choose one of the following:" << endl
		<< "\t1) Add" << endl
		<< "\t2) Subtract" << endl
		<< "\t3) Multiply" << endl
		<< "\t4) Divide" << endl;
	cout << "Input: ";
	cin >> input;
	cout << endl;

	// Display output
	switch (input) {
		case '1':
			cout << num1 << " plus " << num2 << " is " << num1 + num2 << ".";
			break;
		case '2':
			cout << num1 << " minus " << num2 << " is " << num1 - num2 << ".";
			break;
		case '3':
			cout << num1 << " multiplied by " << num2 << " is " << num1 * num2 << ".";
			break;
		case '4':
			cout << num1 << " divided by " << num2 << " is " << num1 / num2 << ".";
			break;
		default:
			cout << "Invalid input. Terminating program.";
	}

	// Pause the system
	system("pause");
	return 0;
}