#include "Instructor.h"
#include "Student.h"
#include "Grades.h"
#include "Application.h"
#include <iostream>
using namespace std;

int main(void) {
	Student student;
	Instructor instructor;
	Grades grade;


	instructor.UpdateGrades(78);			// Update student grade
	instructor.UpdateGrades(50);
	instructor.UpdateGrades(90);
	instructor.UploadGrades();				// upload to canvas

	student.WriteApplication(97, 2718893);
	_sleep(1000);

	instructor.ReadEssay(3);				// Give essay a ranking


}