#include "stdafx.h"
#include "Tiger.h"


Tiger::Tiger(int numberOfBands, int age, string subKingdom, string name, string color
			 , string breed, string gender):Mammals(age, subKingdom, name, color, breed, gender)
{
	this->numberOfBands=numberOfBands;
}


Tiger::~Tiger(void)
{
}

void Tiger::huntingForZebras()
{
	cout<<"Я охочусь на зебр!"<<endl;
}
