// This is a comment

/* 
 * Multi-line 
 * Comments
*/

#include <iostream>  // Used for cout 
#include <vector>    // Used for vectors
#include <string>    // Used for strings
#include <fstream>   // Used for file IO

using namespace std; // Allows using cout instead of std::cout

int main() {
	cout << "Hello, World" << endl;

	// Variables
	const double PI = 3.1415926535;		// Value cannot be changed
	char myGrade = 'A';					// One byte, single quotes
	bool isGood = true;					// Boolean
	int myAge = 18;						// Integer
	float favNumber = 3.1415926535;		// Floating point number
	double otherFavNum = 3.1415926535;	// More accurate floating point number
	/* Other types:
	 * short int
	 * long int
	 * long long int
	 * unsigned int
	 * long double
	 */

	cout << "My favourite number is " << favNumber << endl;

	// Basic Operations
	int sum = 5 + 2;
	int diff = 5 - 2;
	int prod = 5 * 2;
	int div = 5 / 2; // Results in 2
	int mod = 5 % 2; // Results in 1

	int five = 5;
	int six = five++; // Will retrieve first, then add
	int sev = ++six;  // Adds before using result

	int age = 60;
	bool hasLicense = true;

	if ((age >= 1) && (age < 16)) {
		cout << "You cannot drive" << endl;
	}
	else if (!hasLicense) {
		cout << "You cannot drive" << endl;
	}
	else {
		cout << "You can drive" << endl;
	}

	int configOption = 3;

	switch (configOption) {
	case 1:
		cout << "bonjour" << endl;
		break;
	case 2:
		cout << "guten tag" << endl;
		break;
	case 3:
		cout << "hallo" << endl;
		break;
	default:
		cout << "Hello, World!" << endl;
	}

	bool doThrustersFire = true;
	float impactVelocity = (doThrustersFire) ? 0.1 : 100;
	cout << "The lander hits the ground at " << impactVelocity << "m/s." << endl;

	int coolNumbers[5];

	int badNumbers[5] = {4, 24, 13, 13, 24};

	cout << "The worst number ever is " << badNumbers[0] << endl;

	char myName[7] = { 'R', 'u', 's', 's', 'e', 'l', 'l' };
	for (int i = 0; i <= 7; i++) {
		cout << myName[i];
	}
	cout << endl;

	string numberGuessed;
	int numberGuessedInt;
	cout << "Guess a number between 1 and 10: ";
	int correctNumber = 6;
	getline(cin, numberGuessed);
	numberGuessedInt = stoi(numberGuessed);

	if (numberGuessedInt == correctNumber) {
		cout << "you are smart" << endl;
	}
	else {
		cout << "dumb" << endl;
	}

	return 0; // Signifies that main() executed correctly
}