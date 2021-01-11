#include "DateH.h"
#include<iostream>
using namespace std;

DateH::DateH(int jour, int mois, int annee, int heure, int minute, int seconde):Heure(heure,minute,seconde)
{
	this->mois = (mois >= 1 && mois < 13) ? mois : 1;
	this->annee = (annee > 1900) ? annee : 1900;
	this->jour = (jour > this->maxjourmois()) ? 1 : jour;
}

void DateH::affiche() const
{
	cout << jour << "/" << mois << "/" <<annee<< "  ";
	this->Heure::affiche();
}

int DateH::maxjourmois()const
{
	int jours;
	if (this->mois == 2 && this->annee % 4 == 0)
		jours = 28;
	else jours = 29;
	if (this->mois < 7 && this->mois>7 and this->mois % 2 == 0)
		jours=30;
	else jours=31;
	return jours;
}

int DateH::tojours()const
{
	int nbr_jours = this->jour + this->mois * this->maxjourmois();
	if (this->anneebiss())
		nbr_jours += this->annee * 365;
	else
		nbr_jours += this->annee * 366;
	return nbr_jours;
}

bool DateH::anneebiss()const
{
	if (this->annee % 4 == 0)
		return true;
	return false;
}

int DateH::comparer(const DateH&d)const
{
	if (this->tojours() > d.tojours())
		return 1;
	else if (this->tojours() > d.tojours())
		return 0;
	else
		return -1;
}

bool DateH::operator>(const DateH&d)const 
{
	if (this->comparer(d) == 1)
		return true;
	else if (this->comparer(d) == 0)
		return this->Heure::operator>(d);
	else
		return false;
}

DateH& DateH::operator+(int j) const
{
	DateH* d = new DateH;
	if (this->jour + j > this->maxjourmois()) {
		d->jour += (j - 1);
		if (this->mois >= 12)
			d->annee = this->annee + 1;
		else {
			d->mois = this->mois + 1;
			d->annee = this->annee;
		}
		d->heure = this->heure;
		d->minute = this->minute;
		d->seconde = this->seconde;
	}
	else {
		d->jour = this->jour + j;
		d->mois = this->mois;
		d->annee = this->annee;
		d->heure = this->heure;
		d->minute = this->minute;
		d->seconde = this->seconde;
	}
	return *d;
}


