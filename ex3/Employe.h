#pragma once
#include<iostream>
#include<string>
using namespace std;
class Employe
{
	static int cpt;
public:
	Employe() :nom(""), salaire(0.0), mat(cpt++) {};
	Employe(string, float);
	void afficher()const;
	void calculerSalaire();
protected:
	static int indice;
	string nom;
	int mat;
	float salaire;
};

