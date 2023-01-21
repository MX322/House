#include "Apartment.h"
#pragma once

class House
{
private:
	Apartment* apartments;
	int size;

public:
	House();
	House(std::initializer_list<Apartment> arr);
	House(House& obj);
	~House();

	void ShowHouse();
};

