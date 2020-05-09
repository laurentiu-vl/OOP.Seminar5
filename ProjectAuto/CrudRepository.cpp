#include "CrudRepository.h"

AutoInMemoryRepository::AutoInMemoryRepository()
{

}

Auto* AutoInMemoryRepository::findTheOne(int id)            
{
	for (int i = 0; i < autos.size(); i++)
	{
		if (autos[i]->get_id() == id) return autos[i];
	}
	return nullptr;
}

vector<Auto*> AutoInMemoryRepository::findAll()
{
	return autos;
}

Auto* AutoInMemoryRepository::save(Auto* entity)
{
	for (int i = 0; i < autos.size(); i++)
	{
		if (entity->get_id() == autos[i]->get_id())
		{
			return autos[i];
		}
	}
	autos.push_back(entity);
	return nullptr;
}

Auto* AutoInMemoryRepository::deleted(int id)
{
	for (int i = 0; i < autos.size(); i++)
	{
		if (autos[i]->get_id() == id)
		{
			cout << "intra\n";
			Auto* aux = autos[i];
			//delete autos[i];
			autos.erase(autos.begin() + i);
			return aux;
		}
	}
	return nullptr;
}

Auto* AutoInMemoryRepository::update(Auto* entity)
{
	if (deleted(entity->get_id()) == nullptr)
	{
		return entity;
	}
	//del(entity->getID());
	// 
	save(entity);
	return nullptr;
}