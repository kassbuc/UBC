#pragma once
#include <stdio.h>
#include <iostream>
using namespace std;
#include <list>
#include "C:\RTExamples\rt.h"

class Grades
{
	int CourseGrade;

public:
	list<int> allgrades;
	Grades();
	void changegrade(int newgrade);
	int getcoursegrade(void);

};

