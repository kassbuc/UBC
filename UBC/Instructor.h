#pragma once
#include <stdio.h>
#include <string>
#include <list>
#include "Grades.h"
#include "Application.h"
#include <iostream>
using namespace std;


class Instructor
{
	Grades* newGrades;						// Create pointer to point to grade data instead of having a member variable of type grades
	Application* ReadApplication;			// To change essay grade in application

public:
	Instructor();

	void UpdateGrades(int newgrade);
	void UploadGrades(void);
	void ReadEssay(int essayrank);			// 0-5 score
};

