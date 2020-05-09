#pragma once
#include <iostream>
#include <string>
#include "Auto.h"

using namespace std;

class LKW : public Auto
{
private:
	double Greutate_totala, Denumire;

public:
	LKW();

	LKW(int, string, string, double, double);

	void load(double);

	void unload(double);

	int get_load();

	//~LKW();
};