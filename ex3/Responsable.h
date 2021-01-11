#pragma once
#include "Employe.h"
class Responsable :public Employe
{
public:
	Responsable(const Employe&,const Employe&);
	void afficherResponsableDirect()const;
	void afficherResponsableIndirect()const;
	~Responsable();
private:
	 static Employe* tab_inf;
	static int taille;
};

