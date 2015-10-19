//TODO: You need to write the three function definitions to make this code work

#include<iostream>

using namespace std;

//function prototypes
double avg(int, int, int);
void runContest(int);
void displayResults(int, double);

int main()
{
	int count; //Variable to keep track of how many contestants there are
	char cont; //Variable to check if the program should loop again
	do
	{
		cout << "How many contestants are there? ";
		cin >> count;
		cout << endl;

		runContest(count); //Function call to runContest

		cout << "Do you want to run another contest? (y/n): ";
		cin >> cont;
		cout << endl;

	} while (tolower(cont) == 'y');

	system("pause");
	return 0;
}

double avg(int score1, int score2, int score3) {
	return ((double)score1 + score2 + score3)/3;
}

void runContest(int numContestants) {
	double maxAvg = 0;
	int contestant = 0;
	int scores[3];
	double average = 0;
	for (int i = 1; i <= numContestants; i++) {
		for (int j = 1; j <= 3; j++) {
			cout << "Enter contestant #" << i << "\'s score #" << j << " : ";
			cin >> scores[j - 1];
		}
		average = avg(scores[0], scores[1], scores[2]);
		if (average > maxAvg) {
			maxAvg = average;
			contestant = i;
		}
		cout << endl;
	}
	displayResults(contestant, maxAvg);
}

void displayResults(int num, double avg) {
	cout << endl << "Contestant #" << num << " wins with an average score of " << avg << "!" << endl;
}