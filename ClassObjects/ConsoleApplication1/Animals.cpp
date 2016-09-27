#include "stdafx.h"
#include "Animals.h"


Animals::Animals(int age, string name, string breed, string color,string gender)
{
	this->age=age;
	this->name=name;
	this->breed=breed;
	this->color=color;
	this->gender=gender;
	cout<<"Конструктор"<<endl;
}


Animals::~Animals()
{
	cout<<"Деструктор"<<endl;
}


void Animals::Eat()
{
	cout<< "Я ем!\n";
}

void Animals::Sleep()
{
	cout<< "Я сплю!\n";
}


