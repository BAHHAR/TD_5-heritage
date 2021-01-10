#include "TableauBorne.h"

TableauBorne::TableauBorne(int nbr, float min, float max):Tableau(nbr),max(max),min(min)
{
}



TableauBorne& TableauBorne::operator()(int i, float nbr)
{
	if (i >= this->min && i <= this->max && i <= this->taille) {
		this->tab[i] = nbr;
		return *this;
	}
	return *this;
}
