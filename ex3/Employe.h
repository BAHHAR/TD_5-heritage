#pragma once
#include<iostream>
#include<string>
using namespace std;
class Employe
{
	static int cpt;
public:
	Employe() :nom(""), indice_salarial(0.0), mat(cpt++) {};
	Employe(string, float);
	void afficher();
	void calculerSalaire();
protected:
	static int aug;
	string nom;
	int mat;
	float indice_salarial;
	float salaire;
};

