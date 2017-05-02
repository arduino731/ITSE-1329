// converts temperature input in degrees C into F 
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
	int celsius, fahrenheit;
	const int addToNumbers = 32, higherNumber = 9, lowerNumber = 5;

	cout << "Enter Celsius temperature to convert for Fahrenehit" << endl;

	cin >> celsius;

	fahrenheit = (higherNumber / lowerNumber) * celsius + addToNumbers;

	cout << fahrenheit << endl;


	system("PAUSE");
	return 0;
}

