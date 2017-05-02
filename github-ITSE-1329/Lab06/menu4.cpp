// Brian van Vlymen
// ITSE 1329-004 
// Filename: Menu4.cpp    
// Written:  April 8, 2017

#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
	int chooseNumber;
	int lab3 = 1;
	int lab4 = 2;
	int lab5 = 3;
	int lab6 = 4;
	int exit5 = 5;
	int i;

	cout << "\t Brian van Vlymen\t Lab 5-3 (Menu4)" << endl;
	cout << "----------------------------" << endl;

	cout << "1. Your pick from lab 3 (age2030)" << endl;
	cout << "2. Your pick from lab 4 (minmax)" << endl;
	cout << "3. Your pick from lab 5 (penny)" << endl;
	cout << "4. Your pick from lab 6 (lastfirst)" << endl;
	cout << "5. Exit this program" << endl << endl;

	cout << "Choose an item from the above list: ";
	cin >> chooseNumber;
	i = chooseNumber;
	cout << endl;

	if (i <= 5) {
		for (i; i <= 5; i++) {
			if (chooseNumber == lab3) {
				cout << "You chose " << chooseNumber << " lab" << endl << endl;
				int currentAge;
				int currentYear;
				int futureAge;
				const int futureYear = 2030;

				cout << "Enter your current age: ";
				cin >> currentAge;

				cout << "Enter your current year: ";
				cin >> currentYear;
				futureAge = (futureYear - currentYear);
				currentAge = (futureAge + currentAge);
				cout << "You will be " << currentAge << " in 2030" << endl;
				i = exit5;
			}
			else if (chooseNumber == lab4) {
				cout << "You chose " << chooseNumber << " Lab" << endl << endl;
				double number1;
				double number2;

				cout << "Enter your number 1: ";
				cin >> number1;
				cout << "Enter your number 2: ";
				cin >> number2;
				cout << endl;
				i = exit5;

				if (number1 > number2) {
					cout << "The number 1 is larger than number 2" << endl;
				}
				else if (number1 < number2) {
					cout << "The number 2 is larger than number 1" << endl;
				}
				else {
					cout << "Tied! Please different number and try again" << endl;
				}
			}
			else if (chooseNumber == lab5) {
				cout << "You chose " << chooseNumber << " lab" << endl << endl;
				int numDays;
				int count = 1;
				int times = 2;
				double penny = 0.01;

				//Sets the decimal precision to be used to format floating-point values on output operations.
				cout << setiosflags(ios::fixed);
				cout << setprecision(2);

				cout << "Please Enter The Number Of Days Worked: ";
				cin >> numDays;
				cout << " " << endl;
				cout << "Day" << "\t\t" << "Amount Earned" << endl;
				cout << "----------------------------" << endl;

				for (i = 0; i < numDays; i++) {
					cout << "Day " << count << ":" << "\t\t\t";
					count += 1; // add day
					cout << "$" << penny << endl;
					penny = penny * times;
				}
				i = exit5;
			}
			else if (chooseNumber == lab6) {
				cout << "You chose " << chooseNumber << " lab" << endl << endl;
				int input[10]; // numeric array

				for (int i = 0; i<10; i++)
				{
					cout << "Please enter a number." << endl;
					cin >> input[i];
				}
				cout << "The numbers entered in reverse order are:" << endl;
				cout << endl;

				for (int j = 9; j > 0; j--) { // reverse order from highest to low numeric arrays
					cout << input[j] << endl; // output numberic arrays
				}
				i = exit5;
			}
			else if (chooseNumber >= exit5) {
				cout << "The program had exit, thanks!" << endl << endl;
			}
		}
	}
	else {
		//if user has entered invalid choice (other than 1,2,3,4, or 5)
		cout << "Sorry, it is not on your menu display, try again later." << endl;
	}

	system("PAUSE");
	return 0;
}



