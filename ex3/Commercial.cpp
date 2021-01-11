#include "Commercial.h"

Commercial::Commercial(string nom, float salaire,int nbr) :Employe(nom, salaire),nbr_ventes(nbr)
{
}

Commercial::Commercial(const Employe&emp,int nbr):Employe(emp),nbr_ventes(nbr)
{
}

void Commercial::afficher() 
{
	Employe::afficher();
	cout << "Nombre des ventes: " << nbr_ventes << endl;
}

void Commercial::maj()
{
	this->salaire = this->salaire  * nbr_ventes;
}
