#include "Employe.h"
 int Employe:: cpt = 0;
 int Employe::indice = 5;
Employe::Employe(string nom, float salaire):nom(nom),salaire(salaire)
{
	
	Employe::cpt++;
	this->mat = Employe::cpt;
}

void Employe::afficher() const
{
	cout << "Nom: " << this->nom << endl;
	cout << "Matricule: " << this->mat << endl;
	cout << "Salaire: " << this->salaire << endl;
}

void Employe::calculerSalaire()
{
	this->salaire = this->salaire + (this->salaire * this->indice);
}
