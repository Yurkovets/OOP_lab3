#include "stdafx.h"
#include "Owl.h"


Owl::Owl(int beakLenght, int wingSize, int age, string name, string breed, string color, string gender):Bird(wingSize, age, name, breed, color, gender)
{
	this->beakLenght;
}


Owl::~Owl(void)
{
}

void Owl::huntingForMice()
{
	cout<<"Я охочусь на мышей"<<endl;
}
