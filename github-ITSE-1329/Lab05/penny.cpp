// Brian van Vlymen
// ITSE 1329-004 
// Filename: penny.cpp    
// Written:  March 15, 2017

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int i;
	int numDays;
	int count = 1;
	int times = 2;
	double penny = 0.01;

	//Sets the decimal precision to be used to format floating-point values on output operations.
	cout << setiosflags(ios::fixed);
	cout << setprecision(2); 

	cout << "\t Brian van Vlymen\t Lab 5-2 (penny)" << endl;

	cout << "Please Enter The Number Of Days Worked: ";
	cin >> numDays;
	cout << " " << endl;
	cout << "Day" << "\t\t" << "Amount Earned" << endl;
	cout << "----------------------------" << endl;


	for (i = 0; i < numDays; i++) {
		cout << "Day " << count <<":" << "\t\t\t"; 
		count += 1; // add day
		cout << "$" << penny << endl;
		penny = penny * times;
	}

	system("PAUSE");
	return 0;
}
