#include "stdafx.h"
#include "Bird.h"


Bird::Bird(int wingSize, int age, string name, string breed, string color, string gender):Animals(age,name, breed, color, gender)
{
	this->wingSize=wingSize;
}


Bird::~Bird()
{
}

void Bird::fly()
{
	cout<<"� ����!"<<endl;
}