#include "House.h"

House::House() = default;

House::House(std::initializer_list<Apartment> arr)
{
	size = arr.size();
	apartments = new Apartment[size];

	for (auto x = arr.begin(); x != arr.end(); x++)
	{
		*apartments = *x;
		apartments++;
	}

	apartments -= size;
}

House::House(House& obj)
{
	this->size = obj.size;
	apartments = new Apartment[size];

	for (int i = 0; i < size; i++)
	{
		apartments[i] = obj.apartments[i];
	}
}

House::~House()
{
	delete[] apartments;
	delete[] apartments->GetPerson();
	delete[] apartments->GetFio();
}

void House::ShowHouse()
{
	for (int i = 0; i < size; i++)
	{
		apartments[i].ShowApartment();
	}
	std::cout << std::endl;
}