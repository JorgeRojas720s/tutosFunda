
#include <iostream>
using namespace std;

//* Factorial de un número
//? Desarrolla un programa que calcule el factorial de un número entero positivo ingresado por el usuario. Asegúrate de manejar correctamente el caso en el que el usuario ingrese un número negativo.

int factorial(int num)
{
    int result = 1;
    for (int i = 1; i <= num; i++)
    {
        result = result * i;
    }
    return result;
}

//* Adivina el numero
//? Crea un juego en el que el programa genere un número aleatorio entre 1 y 100, y el usuario tenga que adivinarlo. El programa debe indicar si el número ingresado es mayor o menor que el número secreto, y debe contar el número de intentos que el usuario ha realizado.

void game(int numRand)
{
    int number = 0;
    int intentos = 0;
    while (number != numRand)
    {
        cout << endl << "Ingrese un numero: ";
        cin >> number;
        intentos++;
        if (number < numRand)
        {
            cout << endl << "El numero es mayor" ;
        }
        else if(number > numRand)
        {
            cout << endl << "El numero es menor";
        }else{
            cout << endl <<  "**Adivinaste el numero es: " << numRand << "**";
            break;
        }
    }
    cout << endl << "Numero de intento: " << intentos;
    
}

//* Numero Armstrong
void Armstrong(int number)
{
    int total = 0;
    int tam = 0;
    int numberAux = number;

    while (numberAux > 0)
    {
        numberAux /= 10;
        tam++;
    }
    cout << "tamanio " << tam << endl;

    numberAux = number;

    while (numberAux > 0)
    {
        int result = numberAux % 10;
        int numberElevado = 1;

        for (int i = 0; i < tam; i++)
        {
            numberElevado *= result;
        }

        total += numberElevado;
        numberAux /= 10;
    }

    if (number == total)
    {
        cout << "El numero es Armstrong";
    }
    else
    {
        cout << "NO es Armstrong";
    }
}


int main(){



    return 0;
}