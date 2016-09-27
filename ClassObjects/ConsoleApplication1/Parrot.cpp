#include "stdafx.h"
#include "Parrot.h"


Parrot::Parrot(int numberOfWodsLearned, int wingSize, int age, string name, string color, 
			   string  breed, string gender):Bird(wingSize, age, name, color, breed, gender)
{
	this->numberOfWodsLearned=numberOfWodsLearned;
}


Parrot::~Parrot(void)
{
}

void Parrot::learnWods()
{
	cout<<"Я учу слова!"<<endl;
}
