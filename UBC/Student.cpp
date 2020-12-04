#include "Student.h"


Student::Student()
{
	newApplication = new Application;
}

void Student::WriteApplication(int average, int ID) {
	newApplication->average = this->average;
	newApplication->StudentID = this->ID;
	cout << "Student " << ID <<  " writting application..." << endl;
}