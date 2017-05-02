// Brian van Vlymen
// ITSE 1329-004 
// Filename: payroll.cpp    
// Written:  April 19, 2017

#include <iostream>
#include <string> 
#include <cstdlib> // exit command
#include <fstream> // input output file
#include <iomanip> 

using namespace std;

int main()
{
	cout << "\t Brian van Vlymen\t Lab 7-2 (payroll)" << endl;
	// open the file for input
	ifstream data_in;
	data_in.open("payroll.dat");

	// open the file for output
	ofstream data_out;
	data_out.open("totals.dat");

	std::string name;
	double hourly_wage;
	double hours_worked;
	double paycheck;
	int record_count = 0;

	std::cout << std::fixed << std::setprecision(2);
	cout << "	name		hourly wage		hours worked" << endl;

	while (data_in >> name >> hourly_wage >> hours_worked)
	{
		++record_count;
		paycheck = hourly_wage * hours_worked;
		std::cout << record_count << '.' << name << "    	" << hourly_wage << "	 		" << hours_worked << '\n';

		// data out create new file
		data_out << std::fixed << std::setprecision(2);
		data_out << record_count << '.' << name << "	$" << paycheck << '\n';
	}
	data_in.close();
	data_out.close();

	std::cout << '\n' << record_count << " records were read\n";

	system("PAUSE");

}