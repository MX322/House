#include <iostream>
#include <initializer_list>
#pragma once
class Person
{
private:
	char* FIO;

public:
	Person();
	Person(const char* FIO);
	Person(Person& obj);

	char* GetFio();
	void ShowPerson();
	
};

