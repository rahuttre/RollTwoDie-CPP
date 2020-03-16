// Ryan Hutton
// Module Four - Roll Two Die Game
// SNHU IT 312 - Software Development with C++
// 2/1/2020

// Design and implement a program that rolls two dice. Ask the user to input a number between 2 and 12. 
// Then, roll your dice by using a random function to generate a random number representing one of the 
// sides. Output the result of each die and the combined total of the two sides. Continue rolling the 
// dice until the total equals what the user entered. Output the number of tries it took.

#include <iostream>
#include <cstdlib> // for random number generator
#include <ctime> // for random number generator and to access the system time.

using namespace std;

int main()
{
	// I decided to use only positive values with unsigned because there are no negative
	//  dice rolls.
	unsigned int totalDieValue = 0, firstDice = 0, secondDice = 0, attempts = 0, userNum;
	
	// srand makes use of the computer's internal clock to control the random seed generator.
	srand(time(NULL));

	cout << "Ryan Hutton\n";
	cout << "Module Four - Roll Two Die Game\n";
	cout << "SNHU IT 312 - Software Development with C++\n\n";

	cout << "Enter a number between 2 and 12: ";
	cin >> userNum;

	while (totalDieValue != userNum)
	{
		// Assign a random number from 2 to 12 with this formula: 
		// number = a + rand() % n,
		//  a = the first number in the range (in this case 2 below),
		//  n = the number of terms in your range + 1 (in this case (12-2) + 1 = 11 below).
		firstDice = 2 + rand() % 11; 
		secondDice = 2 + rand() % 11;

		totalDieValue = firstDice + secondDice;

		cout << "The user entered: " << userNum << endl;
		cout << "The first dice rolled was: " << firstDice << endl;
		cout << "The second dice rolled was: " << secondDice << endl;
		cout << "The total of the two die is: " << totalDieValue << endl << endl;

		// attempts serves as a counter to count the number of tries it took for the values to match.
		attempts++;
	}

	cout << "It took " << attempts << " tries to get this lucky! :) " << endl;

	return 0;
}