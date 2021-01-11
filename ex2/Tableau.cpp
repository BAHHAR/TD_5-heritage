#include "Tableau.h"
#include<iostream>
using namespace std;
Tableau::Tableau():taille(0)
{
	this->tab = new float[0];
}

Tableau::Tableau(int nbr):taille(nbr)
{
	this->tab = new float[taille];
}

Tableau::Tableau(const Tableau&t):taille(t.taille)
{
	this->tab = new float[taille];
	for (int i = 0; i < taille; i++) {
		this->tab[i] = t.tab[i];
	}
}

void Tableau::saisie()
{
	cout << "donnez les elements du tableau: " << endl;
	for (int i = 0; i < taille; i++) {
		cin >> this->tab[i];
	}
}

Tableau& Tableau::operator=(const Tableau&t)
{
	this->taille = t.taille;
	this->tab = new float[taille];
	for (int i = 0; i < taille; i++) {
		this->tab[i] = t.tab[i];
	}
}

float& Tableau::operator[](int i)const
{
	return this->tab[i];
}

Tableau::~Tableau()
{
	delete[] this->tab;
	this->tab = 0;
}
