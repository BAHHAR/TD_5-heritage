#pragma once
#include "Employe.h"
class Commercial :public Employe
{
public:
	Commercial(string, float,int);
	Commercial(const Employe&,int);
	void afficher()const;
	void maj();
private:
	int nbr_ventes;
};

