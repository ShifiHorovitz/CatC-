#pragma once
#include "Cat.h";
class StreetCat:public Cat
{
protected:
	int NumBattles;
public:
	StreetCat(char* name, int longMustache, char* color, int NumBattles);
	int getNumBattles();
	void setNumBattles(int numBattles);

};

