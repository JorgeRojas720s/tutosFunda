#pragma once
#include "Animal.h"
#include <iostream>

class Perro : public Animal {
private:
	string name;
public:
	Perro(string, int, string);

	void ladrar();

	string getName();


};