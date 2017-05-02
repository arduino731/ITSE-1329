// create a menu with 5 line items. 
// Programmer : Brian van Vlymen 
// Lab04 - MENU2
// ITSE 1329-001


#include <iostream>
using  namespace std;

int main()
{
	int chooseNumber;
	int item1 = 1;
	int item2 = 2;
	int item3 = 3;
	int item4 = 4;
	int item5 = 5;

	cout << "1. pizza" << endl;
	cout << "2. water" << endl;
	cout << "3. chesse" << endl;
	cout << "4. coke" << endl;
	cout << "5. beer" << endl;

	cout << "Choose an number from the above list: ";
	cin >> chooseNumber;

	if (chooseNumber == item1) {
		cout << "You chose " << chooseNumber << " thanks!" << endl;
	}
	else if (chooseNumber == item2) {
		cout << "You chose " << chooseNumber << " thanks!" << endl;
	}
	else if (chooseNumber == item3) {
		cout << "You chose " << chooseNumber << " thanks!" << endl;
	}
	else if (chooseNumber == item4) {
		cout << "You chose " << chooseNumber << " thanks!" << endl;
	}
	else if (chooseNumber == item5) {
		cout << "You chose " << chooseNumber << " thanks!" << endl;
	}
	else {
		cout << "Sorry, it is not on your menu display, try different number." << endl;
	}

	system("PAUSE");
	return 0;

}