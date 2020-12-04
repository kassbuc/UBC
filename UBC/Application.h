#pragma once
#include <stdio.h>
#include <iostream>
using namespace std;
#include <list>


class Application
{
public:
	list<int> admitpile;
	list<int> goodpile;
	list<int> okpile;
	int average;
	int StudentID;
	int pile;			// Pile 1=admit, Pile 2=Good, Pile 3=average
	int EssayRank;
	int spotsavailable;

	Application();
	void Submit();
	void Sort();

};
