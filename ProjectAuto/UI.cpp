#include "ui.h"
#include <iostream>
#include <vector>
using namespace std;

UI::UI()
{
	cont = AutoController::ret_instanta();
}

/*UI::~UI()
{
	delete cont;
}*/

void UI::Menu()
{
	cout << "Please select an option\n";
	cout << "\t 1. Find a car by ID\n";
	cout << "\t 2. Display all the cars\n";
	cout << "\t 3. Save a new car\n";
	cout << "\t 4. Update an existing car\n";
	cout << "\t 5. Delete an existing car\n";
	cout << "\t 6. Exit\n";
}

void UI::Run()
{
	while (true)
	{
		Menu();
		cout << "Your option is: ";
		
		int op;
		cin >> op;
		switch (op)
		{
		case 1:
		{
			cout << "The ID you are searching for is: ";
			int id;
			cin >> id;
			Auto* a = cont->findAutoById(id);
			if (a == nullptr) cout << "This car is not listed\n";
			else cout << a->get_id() << ' ' << a->get_marca() << ' ' << a->get_model() << '\n';
			break;
		}
		case 2:
		{
			cout << "All our cars are: \n";
			vector<Auto*> v = cont->findAll();
			for (int i = 0; i < v.size(); ++i)
				cout << v[i]->get_id() << ' ' << v[i]->get_id() << ' ' << v[i]->get_model() << '\n';
			break;
			cout << "\n";
		}
		case 3:
		{
			cout << "Save a new car\n";
			int id;
			string mark, modell;
			cout << "ID: ";
			cin >> id;
			cout << "Brand: ";
			cin >> mark;
			cout << "Model: ";
			cin >> modell;
			Auto* a = new Auto(id, mark, modell);
			if (cont->saveAuto(a) == nullptr) cout << "Save successfull\n";
			else cout << "Save unsuccessfull\n";
			break;
		}
		case 4:
		{
			cout << "Update an existing car\n";
			int id;
			string mark, modell;
			cout << "ID: ";
			cin >> id;
			cout << "New Brand: ";
			cin >> mark;
			cout << "New Model: ";
			cin >> modell;
			Auto* a = new Auto(id, mark, modell);
			if (cont->updateAuto(a) == nullptr) cout << "Update successfull\n";
			else cout << "Update unsuccessfull\n";
			break;
		}
		case 5:
		{
			cout << "Delete an existing car\n";
			int id;
			cout << "ID: ";
			cin >> id;
			if (cont->deleteAuto(id) == nullptr) cout << "Delete successfull\n";
			else cout << "Delete unsuccessfull\n";
			break;
		}
		default:
			return;
		}
	}
}