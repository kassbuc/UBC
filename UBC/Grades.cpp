#include "Grades.h"

// these are the grades that will be entered for one single course. Different instances of grades can be for different courses

Grades::Grades()
{
}

void Grades::changegrade(int newgrade)
{
	allgrades.push_back(newgrade);			// The list of grades for all assignments, tests, labs, etc
}

int Grades::getcoursegrade(void)					// The Overall course grade
{
	CourseGrade = 0;
	for (auto it = allgrades.cbegin(); it != allgrades.cend(); ++it) {
		CourseGrade += *it;
	}
	CourseGrade = CourseGrade / allgrades.size();
	return CourseGrade;
}
