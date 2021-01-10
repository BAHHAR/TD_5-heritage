#pragma once
class Tableau
{
	float& operator[](int)const;	
public:
	Tableau();
	Tableau(int);
	Tableau(const Tableau&);
	void saisie();
	Tableau& operator=(const Tableau&);
	~Tableau();
protected:
	float* tab;
	int taille;
};

