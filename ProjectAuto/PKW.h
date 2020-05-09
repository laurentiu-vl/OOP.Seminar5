#include "Auto.h"
#include <string>

using namespace std;

#pragma once
class PKW : public Auto
{
private:
	string echipament;

public:
	PKW(int, string, string, string);

	//~PKW();
};