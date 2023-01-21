#include "Person.h"

Person::Person() = default;

Person::Person(const char* FIO)
{
	this->FIO = new char[strlen(FIO) + 1];
	strcpy_s(this->FIO, strlen(FIO) + 1, FIO);
}

Person::Person(Person& obj)
{
	this->FIO = new char[strlen(obj.FIO) + 1];
	strcpy_s(this->FIO, strlen(obj.FIO) + 1, obj.FIO);
}

char* Person::GetFio()
{
	return FIO;
}

void Person::ShowPerson()
{
	std::cout << FIO << std::endl;
}