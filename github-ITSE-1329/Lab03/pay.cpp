// Input the number of hours worked for a week, and the hourly pay rate. Output the total pay.
// Programmer : Brian van Vlymen
// Lab 3 - pay
// ITSE 1329-001

#include <ctime>
#include <iostream>
#include <cstdlib>
using  namespace std;

int main()
{
	int numberHoursAWeek;
	double currentPayRate;
	double totalPay;

	cout << "Enter your number of hours worked for a week: ";
	cin >> numberHoursAWeek;

	cout << "Enter your current hourly pay rate: ";
	cin >> currentPayRate;

	totalPay = numberHoursAWeek * currentPayRate;

	cout << "You have earned $" << totalPay << " this week" << endl;
	system("PAUSE");
	return 0;

}