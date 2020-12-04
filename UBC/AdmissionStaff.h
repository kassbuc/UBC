#pragma once
#include "C:\RTExamples\rt.h"
#include "Application.h"
#include "Student.h"


class AdmissionStaff
{
	int spotsavailable;

public:
	AdmissionStaff();
	void AssessEssay(Student student);
	void Admit();
};

