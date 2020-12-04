#pragma once
#include <stdio.h>
#include <iostream>
using namespace std;
#include <list>

class Grades
{
	int CourseGrade;

public:
	list<int> allgrades;
	Grades();
	void changegrade(int newgrade);
	int getcoursegrade(void);

};

