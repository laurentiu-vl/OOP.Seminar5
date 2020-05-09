#include "AutoController.h"


using namespace std;

AutoController::AutoController()
{
	
	repo = AutoInMemoryRepository();
	saveAuto(new Auto(1, "BMW", "M4"));
	saveAuto(new Auto(2, "Ford", "F-150"));
	
}

AutoController* AutoController::instanta = NULL;

Auto* AutoController::findAutoById(int id)
{
	return repo.findTheOne(id);
}

vector<Auto*> AutoController::findAll()
{
	return repo.findAll();
}

Auto* AutoController::saveAuto(Auto* a)
{
	return repo.save(a);
}

Auto* AutoController::updateAuto(Auto* a)
{
	return repo.update(a);
}

Auto* AutoController::deleteAuto(int id)
{
	return repo.deleted(id);
}

AutoController* AutoController::ret_instanta()
{
	if (instanta == NULL)
		instanta = new AutoController();

	return instanta;
}

void AutoController::sort_autos()
{
	for (int i = 0; i < repo.autos.size(); ++i)
	{
		for (int j = 0; j < repo.autos.size(); ++i)
		{
			if (repo.autos[i]->get_marca() > repo.autos[j]->get_marca())
			{
				swap(repo.autos[i], repo.autos[j]);
			}//mai trebuie bool
		}
	}
}