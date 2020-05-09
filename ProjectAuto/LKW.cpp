#include "LKW.h"

LKW::LKW()
{

}

LKW::LKW(int id, string marca, string model, double greutate_totala, double denumire) :

	Auto(id, marca, model) {

	/*
	LKW LKW1(1, "Ford", "Raptor", 2200, 55)
	*/

	Greutate_totala = greutate_totala;
	Denumire = denumire;
}

void LKW::load(double kg)
{
	Greutate_totala += kg;
}

void LKW::unload(double kg)
{
	Greutate_totala -= kg;
}

int LKW::get_load()
{
	return Greutate_totala;
}

/*LKW::~LKW()
{

}
*/