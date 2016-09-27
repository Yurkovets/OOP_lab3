#include "stdafx.h"
#include "Crocodile.h"


Crocodile::Crocodile(int tailLenght, int bodyLenght, int age, string name, string color, string breed,
					                string gender):Amphibia(bodyLenght,  age, name, breed, color, gender)
{
	this->tailLenght=tailLenght;
}


Crocodile::~Crocodile()
{
}

void Crocodile::huntingForFish()
{
	cout<<"Я охочусь на рыб!"<<endl;
}
