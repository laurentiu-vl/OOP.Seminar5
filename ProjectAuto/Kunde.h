#include <string>
#pragma once

using namespace std;

class Kunde
{
private:
	int Id;
	string Name;

public:
	Kunde();

	Kunde(int, string);

	int get_id();

	string get_name();

	void set_id(int);

	void set_name(string);
};