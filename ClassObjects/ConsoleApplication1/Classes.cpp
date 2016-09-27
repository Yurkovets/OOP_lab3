// main.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include"Animals.h"
#include"Amphibia.h"
#include"Bird.h"
#include"Mammals.h"
#include"Fish.h"
#include"Crocodile.h"
#include"Lion.h"
#include"Owl.h"
#include"Parrot.h"
#include"Shark.h"
#include"Tiger.h"

using namespace std;


int main()
{
	setlocale(LC_ALL,"rus");
	system("chcp 866");
	Animals Cat(5, "Barsick", "Britan", "Gray", "Male");
	Cat.Eat();
	Cat.Sleep();
	/*printf("\nИмя животного: %s",Cat.name); 
	printf("\nПол животного: %s",Cat.gender);
	printf("\nЦвет животного: %s",Cat.color);*/

	Amphibia lizard(12, 2,"Volodya","China","Green","Female");
	lizard.crawl();

	Bird eagle(12,10, "Inokkentij", "Belorus", "Black", "Male");
	eagle.Eat();
	eagle.fly();

	Mammals man(21, "eumetazoa", "Vasya", "Russian", "beige", "Male");
	man.run();

	Fish perch(13, 4,"Vova", "Belorus", "Blue", "Female");

	Crocodile oligator(12, 20, 10, "Petr", "India", "Green", "Male");
	oligator.huntingForFish();

	Lion aziaticLion(12,10, "Cat", "Leva", "Azia", "Yelow", "Male");
	aziaticLion.huntingForGazelles();

	Owl scopsOwl(12, 10, 5, "Sonya", "Belorus", "Gray", "Female");
	scopsOwl.huntingForMice();

	Parrot carell(100,10,12, "Kesha", "carell", "Red", "Male");
	carell.learnWods();
	carell.Eat();
	carell.fly();

	system("pause");

	return 0;
}

