#include "Rental.h"
#include "Kunde.h"
#include <iostream>
#include "Rental.h"


Rental::Rental()
{

}

void Rental::reserve_auto(Kunde p, Auto a, int t)
{
	reservierung.push_back(Reservation(p, a, t));
}