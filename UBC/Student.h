#pragma once
#include <stdio.h>
#include <iostream>
using namespace std;
#include <list>
#include "Application.h"

class Student
{

	Application* newApplication;
	int average;
	int ID;

public:

	Student();
	void WriteApplication(int average, int ID);

};

