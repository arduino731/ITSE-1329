// program name: cash
// Group 3 (Lab05b) - Justin Herrera, Brian Van Vlymen 
// programer: Justin Herrera

#include <iostream>

using namespace std;

int main()
{
	double items;
	double total = 0;
	
	cout << "Justin Herrera \t\t Lab 05b - cash" << endl << endl;
	cout << "---------------------------------------------------------" << endl;
	cout << "Enter the dollar amount for each item or 0000 to total" << endl;
	cout << "---------------------------------------------------------" << endl << endl;
	cout << "Enter the price for your 1st item: $ ";
	cin >> items;
	while (items != 0000){
		
		total = total + items * 1.08;
		cout << "Enter the price for another item: $ ";
		cin >> items;
	}
	
	cout << endl << endl;
	cout <<"Your grand total with a 8% tax on your items is: $ " << total << endl;

	system("PAUSE");
	return 0;
}
