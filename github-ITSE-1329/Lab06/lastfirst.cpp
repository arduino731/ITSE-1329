// Brian van Vlymen
// ITSE 1329-004 
// Filename: lastfirst.cpp    
// Written:  April 5, 2017

#include <iostream>

using namespace std;

int main()
{
	cout << "\t Brian van Vlymen\t Lab 5-1 (lastfirst)" << endl;

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

	system("PAUSE");
	return 0;
}
