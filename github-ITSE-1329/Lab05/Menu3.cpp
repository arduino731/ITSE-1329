// Brian van Vlymen
// ITSE 1329-004 
// Filename: Menu3.cpp    
// Written:  March 16, 2017

// but teacher want to stay i the loop until you wanted to exit. 

#include <iostream>

using namespace std;


int main()
{
	int chooseNumber;
	int item1 = 1;
	int item2 = 2;
	int item3 = 3;
	int item4 = 4;
	int item5 = 5;
	int exit6 = 6;

	cout << "\t Brian van Vlymen\t Lab 5-3 (Menu3)" << endl;
	cout << "----------------------------" << endl;

	do {
		cout << "1. pizza" << endl;
		cout << "2. water" << endl;
		cout << "3. chesse" << endl;
		cout << "4. coke" << endl;
		cout << "5. beer" << endl;
		cout << "6. exit" << endl << endl;

		cout << "Choose an item from the above list: ";
		cin >> chooseNumber;
		cout << endl;

		if (chooseNumber == item1) {
			cout << "You chose " << chooseNumber << " thanks!" << endl << endl;
		}
		else if (chooseNumber == item2) {
			cout << "You chose " << chooseNumber << " thanks!" << endl << endl;
		}
		else if (chooseNumber == item3) {
			cout << "You chose " << chooseNumber << " thanks!" << endl << endl;
		}
		else if (chooseNumber == item4) {
			cout << "You chose " << chooseNumber << " thanks!" << endl << endl;
		}
		else if (chooseNumber == item5) {
			cout << "You chose " << chooseNumber << " thanks!" << endl << endl;
		}
		else if (chooseNumber == exit6) {
			cout << "The program had exit, thanks!" << endl << endl;
		}
		else { //if user has entered invalid choice (other than 1,2,3,4,5 or 6)
			cout << "Sorry, it is not on your menu display, try different number." << endl;
		}
	} 
	while (chooseNumber >= 7); // condition of do-while loop
	cout << "----------------------------" << endl;

	system("PAUSE");
	return 0;
}

