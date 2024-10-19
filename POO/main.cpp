#include <iostream>
#include "Perro.h"
using namespace std;

void aux() {
	Perro perro1("Pepe", 12, "Buldog");
	Perro perro2("Samus", 10, "Doberman");

	perro1.ladrar();

	cout << endl << "Y me llamo: " << perro1.getName();
	cout << endl << "El perro 2 se lama: : " << perro2.getName();
}

int main() {


	return 0;
}