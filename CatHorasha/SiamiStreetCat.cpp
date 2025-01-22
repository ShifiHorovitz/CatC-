#include "SiamiStreetCat.h"
#include <string>
#include <iostream>
using namespace std;

SiamiStreetCat::SiamiStreetCat(char* name, int longMustache, char* color,
	int numBattles, char* eat) :Cat(name, longMustache, color),
	SiamiCat(name, longMustache, color, eat),
	StreetCat(name, longMustache, color, NumBattles) {
}


ostream& operator<<(ostream& os, const SiamiStreetCat& ssc) {
	os << "Name: " << ssc.Name << ", Mustache Length: "
		<< ssc.LongMustache << ", Food: " << ssc.Eat <<
		", color of mouse: " << ssc.Color;
	return os;
}



