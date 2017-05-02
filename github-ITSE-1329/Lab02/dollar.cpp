#include <cstdlib>
#include <iostream>

using namespace std;

int main() {

	double CanadianDollars;
	double AmericanDollars;
	float price = 1.27;

	CanadianDollars = AmericanDollars * price;

	cout << "Enter American dollars value ";

	cin >> AmericanDollars;

	cout << "Value for Canadian dollars is ";
	cout << CanadianDollars << endl;

	system("PAUSE");
	return 0;
}

