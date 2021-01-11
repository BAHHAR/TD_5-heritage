#include "Responsable.h"
#define max_taille 50
int Responsable::taille = 0;
Employe*Responsable:: tab_inf =  new Employe[max_taille];
Responsable::Responsable(const Employe&emp1, const Employe&emp2):Employe(emp2)
{
	Responsable::taille++;
	this->tab_inf[taille - 1] = emp1;
}

void Responsable::afficherResponsableDirect() const
{
	cout << "Les informations du responsable direct pour l employe: " << this->nom << " : "<<endl;
	this->tab_inf[taille - 1].afficher();
}

void Responsable::afficherResponsableIndirect() const
{
	cout << "Les informations du responsable indirect pour l employe: " << this->nom << " : " << endl;
	for(int i=0;i<taille;i++)this->tab_inf[i].afficher();
}

Responsable::~Responsable()
{
	delete[]this->tab_inf;
	tab_inf = 0;
}
