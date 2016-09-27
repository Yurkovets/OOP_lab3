#include "stdafx.h"
#include "Lion.h"


Lion::Lion(int lenghtOfMane, int age, string subKingdom, string name, string color, string breed, 
		                        string gender):Mammals(age, subKingdom, name, color, breed, gender)
{
	this->leghtOfMane=leghtOfMane;
}


Lion::~Lion(void)
{
}

void Lion::huntingForGazelles()
{
	cout<<"Я охочусь на газелей"<<endl;
}
