// Brian van Vlymen
// ITSE 1329-004 
// Filename: gcount.cpp    
// Written:  April 6, 2017
#include <iostream>

using namespace std;

int main()
{
	cout << "\t Brian van Vlymen\t Lab 5-2 (gcount)" << endl;
	const int exit = -1; // to exit
	int grade = 0; // the input varible
	int four = 0; // How many got four
	int three = 0; // How many got three
	int two = 0; // How many got two
	int one = 0; // How many got one
	int zero = 0; // How many got zero
	char gradeLetter[5] = {'F', 'D', 'C','B','A'}; // result grade
	int countGrades[5] = { 0,  0 , 0 , 0 , 0 }; // store values

	while (grade != exit) { // creating an infinite loop that will only exit should the input -1 be entered
		cout << "A = 4, B = 3, C = 2, D = 1, F = 0" << endl;
		cout << "Enter any number of grades for exam or -1 to exit: ";
		cin >> grade;
		cout << endl;

		if (grade == 4)
		{
			four++; // adding by one every time input
			countGrades[grade] = four; // number pushs array into 4 
			cout << "Number of grades : " << countGrades[grade] << endl;
		}
		else if (grade == 3)
		{
			three++;
			countGrades[grade] = three; // number pushs array into 3 
			cout << "Number of grades : " << countGrades[grade] << endl;
		}
		else if (grade == 2)
		{
			two++;
			countGrades[grade] = two; // number pushs array into 2
			cout << "Number of grades : " << countGrades[grade] << endl;
		}
		else if (grade == 1)
		{
			one++;
			countGrades[grade] = one; // number pushs array into 1
			cout << "Number of grades : " << countGrades[grade] << endl;
		}
		else if (grade == 0)
		{
			zero++;
			countGrades[grade] = zero; // number pushs array into 0
			cout << "Number of grades : " << countGrades[grade] << endl;
		}
		else if (grade == -1) { // exit program
			cout << "Thank you" << endl;
		}
		else {
			cout << "invaild number. Try Again " << endl << endl;
		}

	}

	for (int i = 4; i >= 0; i--) { // result total of arrays
		cout << "Number of grades : " << countGrades[i] << " Letter grade: " << gradeLetter[i] << endl << endl;
	}
	system("PAUSE");
	return 0;
}
