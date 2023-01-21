#include "Apartment.h"

Apartment::Apartment() = default;

Apartment::Apartment(std::initializer_list<Person> arr)
{
	size = arr.size();
	persons = new Person[size];
	for (auto x = arr.begin(); x != arr.end(); x++)
	{
		*persons = *x;
		persons++;
	}

	persons -= size;
}

Apartment::Apartment(Apartment& obj)
{
	this->size = obj.size;
	persons = new Person[size];

	for (int i = 0; i < size; i++)
	{
		persons[i] = obj.persons[i];
	}
}

char* Apartment::GetFio()
{
	return GetFio();
}

Person* Apartment::GetPerson()
{
	return persons;
}

void Apartment::ShowApartment()
{
	for (int i = 0; i < size; i++)
	{
		persons[i].ShowPerson();
	}

	std::cout << std::endl;
}