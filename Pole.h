#pragma once
ref class Pole
{
public:
	Pole();
	int id;
	int owner; //0 - nikt, 1-gracz 1, 2-2
	void Pole::setOwner(int n);
	int Pole::getOwner();
	
	
};

