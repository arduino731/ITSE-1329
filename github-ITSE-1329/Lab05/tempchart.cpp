// Brian van Vlymen
// ITSE 1329-004 
// Filename: tempchart.cpp    
// Written:  March 15, 2017

#include <iostream>

using namespace std;

int main()
{
	double celsius;
	double farenheit;
	int i;

	cout << "\t Brian van Vlymen\t Lab 5-1 (tempchart)" << endl;
	cout << "Enter Celsius temp: ";
	cin >> celsius;

	for (i = 0; i <= celsius; i++) {
		farenheit = (((celsius * 9) / 5) + 32); // convert the Celsius to Fahrenheit
		cout << "   " << celsius << "     |     " << farenheit << endl; // Output both variables on same line
		celsius = celsius + 10; // Increase Celsius by 10
		if (i == 9) {
			celsius = 0; // reset celsius
		}
	}

	system("PAUSE");
	return 0;
}
