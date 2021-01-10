#pragma once
class Heure
{
public:
	Heure(int h = 0, int m = 0, int s = 0);
	void affiche()const;
	bool operator>(const Heure&)const;
protected:
	int heure, minute, seconde;
};

