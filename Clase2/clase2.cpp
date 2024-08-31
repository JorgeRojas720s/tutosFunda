#include <iostream>
using namespace std;


void tipoNumero(int numero){
    if (numero > 0) {
        cout << "Positivo";
    }
    else if (numero < 0) {
        cout << "Negativo";
    }
    else {
        cout << "Igual a cero";
    }
}

void fibonacci(int cant) {
    int a = 0;
    int b = 1;
    for (int i = 0; i < cant; i++) {
        cout << a << " ";
        int temp = a;
        a = b;
        b = temp + a;
    }
}



int main()
{


    return 0;
}