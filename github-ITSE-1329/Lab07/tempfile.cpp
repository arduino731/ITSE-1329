// Brian van Vlymen
// ITSE 1329-004 
// Filename: tempfile.cpp    
// Written:  April 18, 2017

#include <iostream>
#include <cstdlib> // exit command

using namespace std;

int main()
{
	double celsius = 0;
	double fahrenheit;

	cout << "\t Brian van Vlymen\t Lab 7-1 (tempfile)" << endl;
	cout << "     Celsius  |  Fahrenheit" << endl;
	while (celsius <= 100) {
		fahrenheit = (((celsius * 9) / 5) + 32); // convert the Celsius to Fahrenheit
		cout << "	" << celsius << "     |     " << fahrenheit << endl; // Output both variables on same line
		celsius = celsius + 10; // Increase Celsius by 10
	}

	system("PAUSE");
	return 0;
}
