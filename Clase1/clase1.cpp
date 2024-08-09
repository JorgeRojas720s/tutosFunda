#include <iostream>
#include <time.h>

using namespace std;

//!Practice

//* Números pares e impares
//? Escribe un programa que pida un número entero al usuario y determine si es par o impar.

bool par(int num) {
    if (num % 2 == 0) {
        return true;
    }
    else {
        return false;
    }
}

//* Swap
//? Escribe un programa que permita intercambiar los valores de dos variables enteras.

void swap(int number1, int number2){
  int aux = number1;
  number1 = number2;
  number2 = aux;
}

//* Factorial de un número
//? Desarrolla un programa que calcule el factorial de un número entero positivo ingresado por el usuario. Asegúrate de manejar correctamente el caso en el que el usuario ingrese un número negativo.

int factorial(int num) {
    int result = 1;
    for (int i = 1; i <= num; i++) {
        result = result * i;
    }
    return result;
}

//* Adivina el numero
//? Crea un juego en el que el programa genere un número aleatorio entre 1 y 100, y el usuario tenga que adivinarlo. El programa debe indicar si el número ingresado es mayor o menor que el número secreto, y debe contar el número de intentos que el usuario ha realizado.

int main(){
  srand(time(NULL));

  // int num = rand() % 101;
  // cout << "El numero aleatorio es: " << num << endl;


  cout << "hola mundo\n";

  
    return 0;
}