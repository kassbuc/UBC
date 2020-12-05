#pragma once
#include <stdio.h>
#include <iostream>
using namespace std;
#include <list>
#include "Application.h"
#include "C:\RTExamples\rt.h"

class Student
{

public:
	int average;
	int ID;
	Application* newApplication;

	Student(int, int);
	void WriteApplication(void);


};

