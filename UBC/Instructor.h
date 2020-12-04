#pragma once
#include <stdio.h>
#include <string>
#include <list>
#include "Grades.h"
#include "Application.h"
#include <iostream>
using namespace std;
#include "C:\RTExamples\rt.h"


class Instructor
{
	Grades* newGrades;						// Create pointer to point to grade data instead of having a member variable of type grades

public:
	Instructor();

	void UpdateGrades(int newgrade);
	void UploadGrades(void);
};

