#pragma once
#include "Employe.h"
class Commercial :public Employe
{
public:
	Commercial(string, float,int);
	Commercial(const Employe&,int);
	void afficher();
	void maj();
private:
	int nbr_ventes;
};

