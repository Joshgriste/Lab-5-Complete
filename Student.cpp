//Student.cpp
#include "Student.h"

Student::Student()
{
	setCredits(0);
	setGPA(4.0);
}

void Student::setCredits(int c){credits = c;}
void Student::setGPA(double g){gpa = g;}

void Student::print()
{
	cout <<"\nStudent Information\n"
		 <<first << " " << last << "\n"
		 <<"Credits: " << credits << "\n"
		 <<"GPA: " << gpa << "\n";
}

