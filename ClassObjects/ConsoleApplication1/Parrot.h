#pragma once
#include"Bird.h"

class Parrot:public Bird
{
public:
	int numberOfWodsLearned;// ���������� ��������� ����
	Parrot(int, int, int, string, string, string, string);
	~Parrot();
	void learnWods();

	class Zoo 
	{
		int dateOfBirth, amountOfParrot, numberOfSales;
	public:
		Zoo ();
		~Zoo ();
		void SellParrot();
	};

};

