#pragma once
#include "Tableau.h"
class TableauBorne :public Tableau
{
public:
	TableauBorne(int, float, float);
	float& operator[](int)const=delete;
	TableauBorne& operator()(int, float);
private:
	float min, max;
};	
