#pragma once
#include <stdio.h>
#include <iostream>
using namespace std;
#include <list>
#include "Application.h"
#include "C:\RTExamples\rt.h"

class Student
{
	Application* newApplication;

public:
	int average;
	int ID;

	Student(int, int);
	void WriteApplication(void);

	void ChangeEssayRank(int rank);
	void SortApplication();

	int GetEssayRank();

};

