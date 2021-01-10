#pragma once
#include "Heure.h"
class DateH :public Heure
{
public:
	DateH( int jour=1 , int mois =1,int annee=1900,int heure=0,int minute=0,int seconde=0);
	void affiche()const;
	int maxjourmois()const;
	int tojours()const;
	bool anneebiss()const;
	int comparer(const DateH&)const;
	bool operator>(const DateH&)const;
	DateH& operator+(int)const;
protected:
	int jour, mois, annee;
};

