#include "Student.h"


Student::Student(int a, int User)
{
	this->average = a;
	this->ID = User;
}

void Student::WriteApplication() {
	newApplication = new Application;
	newApplication->average = this->average;
	newApplication->StudentID = this->ID;
	cout << "Student " << ID <<  " writing application..." << endl;
	Sleep(1000);
}


