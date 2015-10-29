/*
Sae Hun Kim
CPSC 121 SI Quest 11

This program allows the user to play dice rolls with Rex.
The highest roller is awarded a point and ties are not awarded points.
First to get 5 points wins.
*/

#include<iostream>
#include<ctime>
using namespace std;

class Die {
private:
	int numSides;
	int previousRoll;
public:
	Die();
	int roll();
};

int main() {
	// Declare variables
	Die die;
	int round = 1;
	int userRoll = 0, rexRoll = 0;
	int userScore = 0, rexScore = 0;
	

	// Display Welcome Message
	cout << "----- Welcome to Dice Rolls -----" << endl
		<< "Play against Rex. 5 points. Win. Tie. No score." << endl;
	cout << "JK. You don't play. Only watch. Computer roll for you." << endl;
	cout << endl << "----- Game Start -----" << endl;
	
	// Roll till someone wins
	while (userScore < 5 && rexScore < 5) {
		srand(time(0));
		cout << "----- ROUND " << round << " -----" << endl;
		userRoll = die.roll();
		cout << "Your roll is " << userRoll << endl;
		rexRoll = die.roll();
		cout << "Rex rolled a " << rexRoll << endl;
		
		// Calculate winner
		if (userRoll > rexRoll) {
			userScore++;
			cout << "You won. gj." << endl;
		}
		else if (userRoll < rexRoll) {
			rexScore++;
			cout << "You lost. gg." << endl;
		}
		else {
			cout << "TIE." << endl;
		}

		// Display scoreboard
		cout << "You : " << userScore << " Rex : " << rexScore << endl;

		// Pause for the user to see score
		cout << "Press enter to continue" << endl;
		cin.get();
		round++;
	}

	// Display Winner
	if (userScore == 5) {
		cout << "You win. The Game. Bye" << endl;
	}
	else {
		cout << "YOU LOOOOOOSEE" << endl;
	}

	//Pause the system
	system("pause");
	return 0;
}

Die::Die() {
	numSides = 6;
	previousRoll = abs(time(0)) % 6;
}

int Die::roll() {
	//srand(time(0));
	previousRoll = rand() % numSides + 1;
	return previousRoll;
}