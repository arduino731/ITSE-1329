// given the appropriate dimension (ft) to a room and a cost of flooring per square foot, output the total cost of the flooring. The room can be rectangular or circular.
// Programmer : Brian van Vlymen 
// Lab04 - FLOOR2
// ITSE 1329-001

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double Length; //user inputs the length of the room
	double Width; //user inputs the width of the room
	double Price; //user inputs the price of the flooring per square feet
	double Area; //area of the room is calculated
	double Cost; //total flooring cost for the room
	double Dimension; // total of dimension for circle
	float const pi = 3.14159; // constants pi 
	int chooseFormula; 
	int rectangular = 1;
	int circular = 2;
	
	//ask user for rectangular or circular
	cout << "Please choose a number: " << endl;
	cout << "1. rectangular " << endl;
	cout << "2. circular " << endl;
	cin >> chooseFormula;

	if (chooseFormula == rectangular) {
		//ask for the length of the room
		cout << "Please enter the length of the room: ";
		cin >> Length;

		//ask for the width of the room
		cout << "Please enter the width of the room: ";
		cin >> Width;

		Area = Length * Width;

		//ask for the price of the flooring per square feet
		cout << "Please enter the price of the flooring per square feet: ";
		cin >> Price;

		Cost = Area * Price;

		//Sets the decimal precision to be used to format floating-point values on output operations.
		cout << setiosflags(ios::fixed);
		cout << setprecision(2);

		//total flooring cost is presneted to the user
		cout << "The total cost for the floor is: $" << Cost << endl;

	}else if (chooseFormula == circular) {
		//ask for the dimension of the room
		cout << "Please enter the dimension (feet) of the room: ";
		cin >> Dimension;

		Area = pi * Dimension;

		//ask for the price of the flooring per square feet
		cout << "Please enter the price of the flooring per square feet: $";
		cin >> Price;

		Cost = Area * Price;

		//Sets the decimal precision to be used to format floating-point values on output operations.
		cout << setiosflags(ios::fixed);
		cout << setprecision(2);

		//total flooring cost is presneted to the user
		cout << "The total cost for the floor is: $" << Cost << endl;
	}
	else {
		cout << "You must choose either 1 or 2" << endl;
	}

	system("PAUSE");
	return 0;
}

