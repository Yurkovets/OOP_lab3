#include "stdafx.h"
#include "Animals.h"


Animals::Animals(int age, string name, string breed, string color,string gender)
{
	this->age=age;
	this->name=name;
	this->breed=breed;
	this->color=color;
	this->gender=gender;
	cout<<"�����������"<<endl;
}


Animals::~Animals()
{
	cout<<"����������"<<endl;
}


void Animals::Eat()
{
	cout<< "� ��!\n";
}

void Animals::Sleep()
{
	cout<< "� ����!\n";
}


