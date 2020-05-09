#include "Auto.h"

Auto::Auto()
{

}

Auto::Auto(int id, string marca, string model)
{
	Id = id;
	Marca = marca;
	Model = model;
}

int Auto::get_id()
{
	return Id;
}

string Auto::get_marca()
{
	return Marca;
}

string Auto::get_model()
{
	return Model;
}

void Auto::set_id(int id_nou)
{
	Id = id_nou;
}

void Auto::set_marca(string marca_noua)
{
	Marca = marca_noua;
}

void Auto::set_model(string model_nou)
{
	Model = model_nou;
}