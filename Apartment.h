#include "Person.h"
#pragma once

class Apartment
{
private:
	Person* persons;
	int size;

public:
	Apartment();
	Apartment(std::initializer_list<Person> arr);
	Apartment(Apartment& obj);

	char* GetFio();
	Person* GetPerson();
	void ShowApartment();
};

