#include "stdafx.h"
#include "Shark.h"


Shark::Shark(int numberOfTeeth, int finLenght, int age, string name, string color,
			 string breed,string gender):Fish(finLenght, age, name, color, breed, gender)

{
	this->numberOfTeeth=numberOfTeeth;
}


Shark::~Shark()
{
}

void Shark::huntingForMollusks()
{
	cout<<"Я охочусь на моллюсков"<<endl;
}
