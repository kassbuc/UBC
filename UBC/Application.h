#pragma once
#include <stdio.h>
#include <iostream>
using namespace std;
#include "C:\RTExamples\rt.h"


class Application
{
public:
	int average;
	int StudentID;
	int EssayRank;

	int admit = 0;
	int goodpile = 0;
	int okpile = 0;

	Application();
	void Sort();

};


