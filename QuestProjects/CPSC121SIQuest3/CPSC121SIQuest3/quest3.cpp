/*
Sae Hun Kim
CPSC 121 SI Quest 3
*/

#include <iostream>>
#include <string>
using namespace std;

int main() {
	// Declare variables
	int age = 0;
	string firstName = "";
	string color = "";

	// Get input
	cout << "Please enter your first name: ";
	cin >> firstName;
	cout << "Please enter your age: ";
	cin >> age;
	cout << "Please enter your favorite color: ";
	cin >> color;

	// Display output
	cout << "Your age is " << age << endl;
	cout << "Your first name is " << firstName << endl;
	cout << "Your favorite color is " << color << endl;

	// Pauses the system
	system("pause");
	return 0;
}