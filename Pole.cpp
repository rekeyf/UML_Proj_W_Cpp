#include "Pole.h"
	int id;
	int owner; //0 - nikt, 1-gracz 1, 2-2

Pole::Pole()
{
	
	owner=0;
	
}

	
	void Pole::setOwner(int n)
	{
		this->owner=n;
	}

	int Pole::getOwner()
	{
		return this->owner;
		
	}