#pragma once
#include "Auto.h"
#include <vector>
#include <iostream>
using namespace std;

template <class E>
class CrudRepository
{
public:
	virtual E findTheOne(int id) = 0;

	virtual vector< E > findAll() = 0;
	
	virtual E save(E entity) = 0;
	
	virtual E deleted(int id) = 0;
	
	virtual E update(E entity) = 0;
	
	virtual ~CrudRepository() {};
};

class AutoInMemoryRepository : public CrudRepository<Auto*>
{
public:
	AutoInMemoryRepository();
	
	vector<Auto*>autos;
	
	Auto* findTheOne(int id);
	
	vector<Auto*> findAll();
	
	Auto* save(Auto* entity);
	
	Auto* deleted(int id);
	
	Auto* update(Auto* entity);
};
