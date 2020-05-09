#pragma once
#include"Kunde.h"
#include"Auto.h"

class Reservation
{
private:
	Auto Masina;
	Kunde Persoana;
	int Zi;

public:
	Reservation(Kunde Persoana, Auto Masina, int Zi);
};
