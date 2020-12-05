#include "Instructor.h"
#include "Student.h"
#include "Grades.h"
#include "Application.h"
#include "AdmissionStaff.h"
#include "C:\RTExamples\rt.h"
#include <iostream>
using namespace std;

int main(void) {
	Instructor instructor;
	Grades grade;

	// Demonstrate instructor uploading grades to system

	instructor.UpdateGrades(78);			// Update student grade
	instructor.UpdateGrades(50);
	instructor.UpdateGrades(90);
	instructor.UploadGrades();				// upload to canvas

	// Demonstrate student getting admitted or rejected to second year program

	Student student1(97, 283993);
	Student student2(65, 289223);
	Student student3(75, 283261);
	Student student4(74, 343782);
	Student student5(78, 237929);
	student1.WriteApplication();			// parameters: grade percentage and Student ID
	student2.WriteApplication();
	student3.WriteApplication();
	student4.WriteApplication();
	student5.WriteApplication();
	Sleep(1000);

	AdmissionStaff admission;
	admission.AssessEssay(student1);				// Admission
	admission.AssessEssay(student2);
	admission.AssessEssay(student3);
	admission.AssessEssay(student4);
	admission.AssessEssay(student5);

	admission.Admit(student1);
	admission.Admit(student2);
	admission.Admit(student3);
	admission.Admit(student4);
	admission.Admit(student5);
}

