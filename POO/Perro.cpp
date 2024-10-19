#include "Perro.h"

Perro::Perro(string name, int age, string especie) : Animal(age,especie)
{
	this->name = name;
}

void Perro::ladrar()
{
	caminar();
	cout << "Guau, guau" << endl;
}

string Perro::getName()
{
	return this->name;
}
