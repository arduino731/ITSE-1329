// Brian van Vlymen
// ITSE 1329-004 
// Filename: Students.cpp    
// Written:  April 20, 2017

#include <iostream>
#include <string> 
#include <cstdlib> // exit command
#include <fstream> // input output file
#include <iomanip>

using namespace std;

int main()
{
	cout << "\t Brian van Vlymen\t Lab 7-3 (Students)" << endl;

	// open the file for input
	ifstream data_in;
	data_in.open("students.dat");

	// open the file for output
	ofstream data_out;
	data_out.open("highestGrade.dat");

	string lastname, firstname;
	double grades[5];

	double highestGrade = 0;
	int totalexams = 5;
	double average;
	int record_count = 0;
	double totalgrades = 0;

	std::cout << std::fixed << std::setprecision(2);

	while (data_in >> firstname >> lastname >> grades[0] >> grades[1] >> grades[2] >> grades[3] >> grades[4]) {
		record_count++;
		average = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4]) / totalexams;
		std::cout << record_count << '.' << firstname << ' ' << lastname << ' ' << average << endl;


		data_out << std::fixed << std::setprecision(2);

		// find highest grade overall

		for (int i = 0; i < totalexams; i++) {
			if (grades[i] > highestGrade) {
				highestGrade = grades[i];
			}
		}


		data_out << record_count << '.' << firstname << ' ' << highestGrade << '\n';
		highestGrade = 0;

	}

	data_in.close();
	data_out.close();
	std::cout << '\n' << record_count << " records were read\n";
	system("PAUSE");
	return 0;
}
