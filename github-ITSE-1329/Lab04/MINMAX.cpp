// accept 2 numbers as input. Display which number is larger and which is smaller
// Programmer : Brian van Vlymen 
// Lab04 - MINMAX
// ITSE 1329-001


#include <iostream>
using  namespace std;

int main()
{
	double number1;
	double number2;

	cout << "Enter your number 1: ";
	cin >> number1;
	cout << "Enter your number 2: ";
	cin >> number2;
	cout << endl;

	if (number1 > number2) {
		cout << "The number 1 is larger than number 2" << endl;
	}
	else if(number1 < number2){
		cout << "The number 2 is larger than number 1" << endl;
	}
	else {
		cout << "Tied! Please different number and try again" << endl;
	}

	system("PAUSE");
	return 0;

}