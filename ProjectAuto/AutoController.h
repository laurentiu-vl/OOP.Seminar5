#pragma once
#include "CrudRepository.h"
#include "Auto.h"
#include "Kunde.h"

class AutoController
{
private:
	AutoController();

	static AutoController* instanta;

public:
	AutoInMemoryRepository repo;

	//~AutoController();
	
	Auto* findAutoById(int id);
	
	vector<Auto*> findAll();
	
	Auto* saveAuto(Auto* car);
	
	Auto* updateAuto(Auto* car);
	
	Auto* deleteAuto(int id);
	
	void sort_autos();
	
	static AutoController* ret_instanta();

};