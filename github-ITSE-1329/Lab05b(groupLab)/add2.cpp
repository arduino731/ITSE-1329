// program name: add
// Group 3 (Lab05b) - Justin Herrera, Brian Van Vlymen
// programer: Brian van Vlymen

#include <iostream>

using namespace std;

int main()
{
	int number = 100;
	int i;
	int sum = 0;

	cout << "\t Brian van Vlymen\t Lab 5b-1 (add)" << endl;

	for (i = 1; i < number; i++) {
		if (i % 2 == 1) {
			sum = sum + i;
			cout << sum << endl; 
		}
	}


	system("PAUSE");
	return 0;
}
