#pragma once
#include <iostream>
#include "Kunde.h"
#include "Auto.h"
#include "LKW.h"
#include "PKW.h"
#include <vector>
#include "Reservation.h"

using namespace std;

class Rental
{
private:
	vector<Reservation> reservierung;

public:
	
	Rental();
	
	~Rental();

	void reserve_auto(Kunde pers, Auto auto1, int zi);
};
