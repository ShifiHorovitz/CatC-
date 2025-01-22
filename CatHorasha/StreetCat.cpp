#include "StreetCat.h"

StreetCat::StreetCat(char* name, int longMustache, char* color, int NumBattles) 
	:Cat(name, longMustache, color), NumBattles(NumBattles){}

int StreetCat::getNumBattles() {
	return NumBattles;
}
void StreetCat::setNumBattles(int numBattles) {
	NumBattles = numBattles;
}


