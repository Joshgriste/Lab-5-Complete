//Faculty.cppp
#include "Faculty.h"

Faculty::Faculty()
{
	setSalary(0.0);
	setOffice("");
}

void Faculty::setSalary(double s) {salary = s;}
void Faculty::setOffice(string o) {office = o;}

void Faculty::print()
{
	cout << "\nFaculty Information\n"
		 <<first << " " << last << "\n"
		 <<"Salary: " << salary << "\n"
		 <<"Office: " << office << "\n";
}

