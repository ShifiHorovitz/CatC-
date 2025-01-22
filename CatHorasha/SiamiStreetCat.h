#pragma once
#include "SiamiCat.h";
#include "StreetCat.h";
class SiamiStreetCat:
	public SiamiCat,public StreetCat
{
public:
	SiamiStreetCat(char* name, int longMustache, char* color, 
		int numBattles, char* eat);
	~SiamiStreetCat();

	friend ostream& operator<<(ostream& os,const SiamiStreetCat& ssc);
		
	


};

