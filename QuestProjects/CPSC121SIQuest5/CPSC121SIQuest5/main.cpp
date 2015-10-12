/*
Sae Hun Kim
CPSC121 Quest 5

Food Order Calculator
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	// Declare variables
	const float TAX_RATE = .0975;
	const float BURGER_COST = 3.50;
	const float FRY_COST = 1.25;
	const float DRINK_COST = 1.00;
	float subTotal = 0, total = 0;
	float calculatedTax = 0;
	int numOfBurger = 0, numOfFry = 0, numOfDrink = 0;

	// Get number purchased for each item
	cout << "How many burgers would you like? ";
	cin >> numOfBurger;
	cout << "How many fries would you like? ";
	cin >> numOfFry;
	cout << "How many drinks would you like? ";
	cin >> numOfDrink;
	cout << endl;

	// Calculate sub-total, calculated tax, and total
	subTotal = (numOfBurger * BURGER_COST) + (numOfFry * FRY_COST) + (numOfDrink * DRINK_COST);
	calculatedTax = subTotal * TAX_RATE;
	total = subTotal + calculatedTax;

	// Display bill
	cout << "SUB-TOTAL\t= " << fixed << setprecision(2) << showpoint << subTotal << endl;
	cout << "CACULATED TAX\t= " << fixed << setprecision(2) << showpoint << calculatedTax << endl;
	cout << "TOTAL\t\t= " << fixed << setprecision(2) << showpoint << total << endl;

	// Pause the system
	system("pause");
	return 0;
}