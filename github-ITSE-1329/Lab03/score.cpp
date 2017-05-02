// Input the number of questions on an exam, the number of correct questions, and a student first name. Output the name and the grade for the exam.
// Programmer : Brian van Vlymen
// Lab 3 - score
// ITSE 1329-001

#include <ctime>
#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>

using  namespace std;

int main()
{

	int oneHundred = 100;
	double numberExams;
	double correctQuestions;
	string name;
	double scoreExam;
	int wrong;
	int correct;
	double result;

	cout << "Enter your number of questions on an exam: ";
	cin >> numberExams;

	cout << "Enter your number of correct questions: ";
	cin >> correctQuestions;

	cout << "Enter your name: ";
	cin >> name;

	cout << setiosflags(ios::fixed);
	cout << setprecision(2);

	result =  (correctQuestions / numberExams) * oneHundred;

	cout << "Your name is " << name << " and your grade for the exam is " << result << endl;

	system("PAUSE");
	return 0;

}