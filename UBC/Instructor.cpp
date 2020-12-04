#include "Instructor.h"

Instructor::Instructor()
{
	newGrades = new Grades;
	ReadApplication = new Application;
}

void Instructor::UpdateGrades(int newgrade)
{
	newGrades->changegrade(newgrade);
}

void Instructor::UploadGrades(void) 
{
	cout << "Grades uploaded to canvas. Press enter to view" << endl;
	getchar();
	cout << "Student grade %: " << newGrades->getcoursegrade() << endl;
}

void Instructor::ReadEssay(int essaygrade) {
	ReadApplication->EssayRank = essaygrade;
}