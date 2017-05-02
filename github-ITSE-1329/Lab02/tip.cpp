#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main() 
{
	string meal;
	double tip = 0.15;
	double price;
	double total;

	cout << "What did you have the meal? ";

	getline (cin, meal);
	
	cout << "great your meal was ";
	cout << meal << "!" << endl << endl;

	cout << "How much your meal? ";
	cin  >> price;
	total = price * tip;
	total = price + total;
	cout << "The total price is $" << total << endl; 


	system("PAUSE");
	return 0;
}

