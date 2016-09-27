#include "stdafx.h"
#include "Mammals.h"


Mammals::Mammals(int age, string name, string subKingdom, string color, string breed, string gender):Animals(age, name, color, breed, gender)
{
	this->subKingdom=subKingdom;
}


Mammals::~Mammals()
{
}

void Mammals::run()
{
	cout<<"Я бегу!"<<endl;
}
