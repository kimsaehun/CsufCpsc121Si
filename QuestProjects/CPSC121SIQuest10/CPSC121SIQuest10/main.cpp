/*
Sae Hun Kim
CPSC 121 SI Quest 10

This program calculates the sum from 0 to the user given input.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	// Declare variables
	int input = 0, sum = 0;
	char again = '\0';
	bool quit = false;

	while (!quit) {
		cout << "Enter number: ";
		cin >> input;

		for (int i = 0; i <= input; ++i) {
			sum += i;
		}

		cout << "The summation is " << sum << ".\n";

		cout << "Go again? y/n? ";
		cin >> again;
		if (tolower(again) != 'y') quit = true;
		
		sum = 0;
	}

	// Pauses the system
	system("pause");
	return 0;
}