#include "Instructor.h"
#include "Student.h"
#include "Grades.h"
#include "Application.h"
#include "AdmissionStaff.h"
#include "C:\RTExamples\rt.h"
#include <iostream>
using namespace std;

int main(void) {
	Student student1(97, 283993), student2(78, 927773), student3(69, 7277649);
	Instructor instructor;
	Grades grade;


	instructor.UpdateGrades(78);			// Update student grade
	instructor.UpdateGrades(50);
	instructor.UpdateGrades(90);
	instructor.UploadGrades();				// upload to canvas

	student1.WriteApplication();			// parameters: grade percentage and Student ID
	student2.WriteApplication();
	student3.WriteApplication();
	Sleep(1000);

	AdmissionStaff admission;
	admission.AssessEssay(student1);				// Admission
	admission.AssessEssay(student2);
	admission.AssessEssay(student3);

	admission.Admit();
}