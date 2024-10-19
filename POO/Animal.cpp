#include "Animal.h"

Animal::Animal(int age, string especie)
{
	this->age = age;
	this->especie = especie;
}

void Animal::caminar()
{
	cout << "Estoy caminando y ";
}
