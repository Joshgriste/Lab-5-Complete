#include"Employee.h"
#include"Faculty.h"
#include"Student.h"
#include<iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int menu()
{
	int choice;
	cout <<"\t\tMain Menu\n" 
		 <<"\t\t=========\n" 
		 <<"\t\t1. Add Faculty\n" 
		 <<"\t\t2. Add Student\n" 
		 <<"\t\t3. View Faculty\n" 
		 <<"\t\t4. View Students\n" 
		 <<"\t\t5. View All\n" 
		 <<"\t\t6. EXIT\n" 
		 <<"\tEnter your choice: ";
	cin >>choice;return choice;
}

void addFaculty(Faculty* fPTR, int size, int &track, Employee* ePTR, int empTrack)
{
	string first, last;
	if (track >= size)
		cout<<"Maxed out!\n";
	else
	{
		for (int i = 0; i < track; i++)
			{
			fPTR++;
			ePTR++;
			}	
		cout<<"Enter full name: ";
		cin>>first>>last;
		fPTR -> setName(first, last);
		track++;
		ePTR = ePTR + empTrack;
		ePTR = fPTR;
		ePTR-> setName(first, last);
	}
}
void addStudent(Student* sPTR, int size, int &track, Employee* ePTR, int empTrack)
{
	string first, last;
	if (track >= size)
		cout<<"Maxed out!\n";
	else
	{
		for (int i = 0; i < track; i++)
			{
			sPTR++;
			ePTR++;
			}	
		cout<<"Enter full name: ";
		cin>>first>>last;
		sPTR -> setName(first, last);
		track++;
		ePTR = ePTR + empTrack;
		ePTR = sPTR;
		ePTR-> setName(first, last);
	}
}
void viewAll(Employee* ePTR, Faculty* fPTR, Student* sPTR, int facTrack, int stuTrack)
{
	for(int i =0; i < facTrack; i++)
	{
		ePTR = fPTR;
		ePTR->print();

		ePTR++;
		fPTR++;
	}
	for(int i = 0; i < stuTrack; i++)
	{
		ePTR = sPTR;
		ePTR->print();
		sPTR++;
	}
	
}

void viewFaculty(Faculty* fPTR, int max)
{
	for (int i = 0; i < max; i++)
	{
		fPTR->print();
		fPTR++;
	}
}

void viewStudent(Student* sPTR, int max)
{
	for (int i = 0; i < max; i++)
	{
		sPTR->print();
		sPTR++;
	}
}

int main(int argc, char** argv) 
{
	Faculty myFac[100];
	Student myStu[100];
	Employee* myEmp[200];
	int option;
	int facCount = 0;
	int stuCount = 0;
	int empCount = 0;
	
	
	do
	{
		system("CLS");
		option = menu();
		switch(option)
		{
			case 1: addFaculty(myFac, 100, facCount, *myEmp, empCount);
				    *myEmp = myFac;
				    empCount++;
				break;
			case 2: addStudent(myStu, 100, stuCount, *myEmp, empCount);
					empCount++;
				
				break;
			case 3: viewFaculty(myFac, facCount);
				
				break;
			case 4: viewStudent(myStu, stuCount);
				
				break;
			case 5: viewAll(*myEmp, myFac, myStu, facCount, stuCount );
					
			
					
				
				break;
			case 6: cout<<"Goodbye!\n";
				
				break;
			default: cout <<"Error: Invalid choice!\n";
		}
		system("PAUSE");
	}while (option != 6);
	return 0;
}
