#pragma once
#include "C:\RTExamples\rt.h"
#include "Application.h"
#include "Student.h"


class AdmissionStaff
{
	int spotsavailable = 5;

public:
	AdmissionStaff();
	void AssessEssay(Student student);
	void Admit(Student student);
};

