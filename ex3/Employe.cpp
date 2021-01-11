#include "Employe.h"
 int Employe:: cpt = 0;
 int Employe::aug = 5;
Employe::Employe(string nom, float ind):nom(nom),indice_salarial(ind),salaire(0.0)
{
	
	Employe::cpt++;
	this->mat = Employe::cpt;
}

void Employe::afficher() 
{
	cout << "Nom: " << this->nom << endl;
	cout << "Matricule: " << this->mat << endl;
	this->calculerSalaire();
	cout << "Salaire: " << this->salaire << endl;
}

void Employe::calculerSalaire()
{
	this->salaire = this->indice_salarial*(aug/100);
}
