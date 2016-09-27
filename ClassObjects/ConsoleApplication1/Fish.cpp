#include "stdafx.h"
#include "Fish.h"


Fish::Fish(int finLenght, int age, string name , string color, string breed, string gender ):Animals(age, name, color, breed, gender)
{
	this->finLenght=finLenght;
}


Fish::~Fish()
{
}

void Fish::swim()
{
	cout<<"Я плыву!"<<endl;
}
