//Student.h
#include"Employee.h"
#ifndef STUDENT_H
#define STUDENT_H

class Student:public Employee
{
	public:
		Student();
		void setCredits(int);
		void setGPA(double);
		void print();
	private:
		int credits;
		double gpa;
};
#endif
