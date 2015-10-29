/*
Sae Hun Kim
CSUF CPSC 121 SI Quest 13

Reads file from mydata.txt
*/

#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream input;
	ofstream output;
	int integer = 0, sum = 0;

	input.open("mydata.txt");
	output.open("myresult.txt");
	if (input) {
		while (input >> integer) {
			sum += integer;
			output << "New Integer = " << integer << ". New Sum = " << sum << "." << endl;
		}
	}
	input.close();
	output.close();

	system("pause");
	return 0;
}