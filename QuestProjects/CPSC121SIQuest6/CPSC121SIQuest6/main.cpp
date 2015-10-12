/*
Sae Hun Kim
CSPC 121 SI Quest 6
Quote Machine
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	// Declare variables
	const int LINE_LENGTH = 50;
	string firstPerson = "", secondPerson = "", thirdPerson = "";
	string firstQuote = "", secondQuote = "", thirdQuote = "";
	string starLine = "", equalLine = "";
	starLine.assign(LINE_LENGTH, '*');
	equalLine.assign(LINE_LENGTH, '=');

	// Get persons and quotes
	cout << "What is your name: ";
	getline(cin, firstPerson);
	cout << "Quote: ";
	getline(cin, firstQuote);
	cout << endl;
	cout << "What is your name: ";
	getline(cin, secondPerson);
	cout << "Quote: ";
	getline(cin, secondQuote);
	cout << endl;
	cout << "What is your name: ";
	getline(cin, thirdPerson);
	cout << "Quote: ";
	getline(cin, thirdQuote);
	cout << endl;

	// Display quotes and persons
	cout << starLine << endl;
	cout << "\"" << firstQuote << "\"\n-" << firstPerson << endl;
	cout << equalLine << endl;
	cout << "\"" << secondQuote << "\"\n-" << secondPerson << endl;
	cout << equalLine << endl;
	cout << "\"" << thirdQuote << "\"\n-" << thirdPerson << endl;
	cout << starLine << endl;

	// Pause the system
	system("pause");
	return 0;
}