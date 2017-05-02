// program name: bunny
// Group 3 (Lab05b) - Justin Herrera, Brian Van Vlymen
// programer: Brian van Vlymen

#include <iostream>

using namespace std;

int main()
{
	int totalBunnies = 0;
	int largestBunny = 0;
	float totalWeight = 0;
	float bunnyWeight;
	float averageWeight;

	cout << "\t Brian van Vlymen\t Lab 5b-3 (bunny)" << endl;

	cout << "Please input a rabbit weight in pounds: ";
	cin >> bunnyWeight; // input the first weight

	if (bunnyWeight != 0) {
		while (bunnyWeight != 0) {
			totalBunnies++;
			totalWeight += bunnyWeight;
			averageWeight = totalWeight / totalBunnies;
			cout << "The total number of rabbits is " << totalBunnies << endl;

			if (bunnyWeight > largestBunny) { 
				largestBunny = bunnyWeight;
				cout << "Largest bunny weight is " << largestBunny << " pounds." << endl;
				cout << "The average weight of the rabbits is " << averageWeight << endl << endl;
				cout << "Please input a rabbit weight in pounds again: ";
				cin >> bunnyWeight; // input the repeat weight
				cout << endl;
				
			} else {
				cout << "Bunny weight is " << bunnyWeight << endl;
				cout << "The average weight of the rabbits is " << averageWeight << endl << endl;
				cout << "Please input a rabbit weight in pounds again: ";
				cin >> bunnyWeight; // input the repeat weight
				cout << endl;
			}

		}

	} else {
		cout << "Please enter at least zero number and try again" << endl;
	}

	system("PAUSE");
	return 0;
}