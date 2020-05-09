#include "Kunde.h"

using namespace std;

Kunde::Kunde()
{

}

Kunde::Kunde(int id, string name)
{
	this->Id = id;
	this->Name = name;

}

int Kunde::get_id()
{
	return Id;
}

string Kunde::get_name()
{
	return Name;
}

void Kunde::set_id(int id_nou)
{
	Id = id_nou;
}

void Kunde::set_name(string name_nou)
{
	Name = name_nou;
}