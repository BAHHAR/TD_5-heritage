#include "Heure.h"
#include <iostream>
using namespace std;








Heure::Heure(int h, int m, int s)
{
	this->heure = (h >= 0 && h < 24) ? h : 0;
	this->minute = (m >= 0 && m < 60) ? m : 0;
	this->seconde = (s >= 0 && s < 60) ? s : 0;
}

void Heure::affiche() const
{
	cout << heure << " h: " << minute << " m: " << seconde << " s" << endl;
}



bool Heure::operator>(const Heure&h) const
{
	return ((this->heure * 100 + this->minute * 10 + this->seconde) > (h.heure * 100 + h.minute * 10 + h.seconde));
}
