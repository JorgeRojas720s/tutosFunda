#include <iostream>
#include <cstdlib> //  system("cls");
#include <time.h>

using namespace std;

//! Practice

//* Números pares e impares
//? Escribe un programa que pida un número entero al usuario y determine si es par o impar.

bool par(int num)
{
    if (num % 2 == 0)
{
        return true;
    }
    else
    {
        return false;
    }
}

//* Swap
//? Escribe un programa que permita intercambiar los valores de dos variables enteras.

void swap(int number1, int number2)
{
    int aux = number1;
    number1 = number2;
    number2 = aux;
}


int main()
{
    // srand(time(NULL));

    // int numRand = rand() % 101;
    // game(numRand);

    //Armstrong(152);

    string perro = "canelo";
    string gato = "minino";
    string aux;

    aux = perro;
    perro = gato;
    gato = aux; 

    cout<<"Perro es: " + perro << endl;
    cout<<"Gato es: "+ gato;

    return 0;
}