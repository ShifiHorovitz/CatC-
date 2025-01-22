#include "Cat.h"
#include <string>
#include <iostream>
using namespace std;
Cat::Cat(char* name, int longMustache, char* color) {
	strcpy(Name, name);
	LongMustache = longMustache;
	strcpy(Color, color);
	cout << "in ctor" << endl;
}

Cat::Cat(const Cat& other) {
	strcpy(Name, other.Name);
    LongMustache = other.LongMustache;
	strcpy(Color, other.Color);
	cout << "in copy ctor" << endl;

}

Cat::~Cat() {
	delete[] Name;
	delete[] Color;
	cout << "in dtor" << endl;
}


char* Cat:: getName() {
	return Name;
}

int Cat:: getLongMustache() {
	return LongMustache;
}
char* Cat::getColor() {
	return Color;
}

void Cat::setName(char* name) {
	strcpy(Name, name);
}
void Cat::setLongMustache(int longMustache) {
	LongMustache = longMustache;
}
void Cat::setColor(char* color) {
	strcpy(Color, color);
}



