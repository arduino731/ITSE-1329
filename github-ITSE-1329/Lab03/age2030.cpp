// Get the user to input their current age and the current year. Calculate and output what their age will be in the year 2030.
// Programmer : Brian van Vlymen
// Lab 3 - age2030
// ITSE 1329-001

#include <ctime>
#include <iostream>
#include <cstdlib>
using  namespace std;

int currentAge;
int currentYear;
int futureAge;
const int futureYear = 2030;

int main()
{
	cout << "Enter your current age: ";
	cin >> currentAge;

	cout << "Enter your current year: ";
	cin >> currentYear;

	futureAge = (futureYear - currentYear);
	currentAge = (futureAge + currentAge);
	cout << "You will be " << currentAge << " in 2030" << endl;
	system("PAUSE");
	return 0;

}