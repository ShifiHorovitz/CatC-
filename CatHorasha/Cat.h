#pragma once
class Cat
{
protected:
	char  Name[10];
	int LongMustache;
	char Color[10]; 

public:
	Cat(char* name, int longMustache, char* color);
	Cat(const Cat & other);

	~Cat();

	char* getName();
	int getLongMustache();
	char* getColor();

	void setName(char* name);
	void setLongMustache(int longMustache);
	void setColor(char* color);



};

