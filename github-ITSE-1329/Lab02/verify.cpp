// converts temperature input in degrees C into F 
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
	int first;
	int second;
	int thrid;

	const int addNumber = 32;
	const int addNumber2 = 112;

	cout << "Enter first number" << endl;
	cin >> first;

	cout << "Enter second number" << endl;
	cin >> second;

	cout << "Enter thrid number" << endl;
	cin >> thrid;

	first = first;
	second = second + addNumber;
	thrid = thrid + addNumber2;
	cout << first << ", " << second << " and " << thrid << endl; 


	system("PAUSE");
	return 0;
}

