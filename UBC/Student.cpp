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
	cout << "Student " << ID <<  " writting application..." << endl;
	Sleep(1000);
}

void Student::ChangeEssayRank(int rank) {
	newApplication->EssayRank = rank;
}

void Student::SortApplication() {
	newApplication->Sort();
}

int Student::GetEssayRank() {
	return newApplication->EssayRank;
}