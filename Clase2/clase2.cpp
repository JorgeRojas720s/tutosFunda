#include <iostream>
using namespace std;

bool par(int num) {
    if (num % 2 == 0) {
        return true;
    }
    else {
        return false;
    }
}

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

int factorial(int num) {
    int result = 1;
    for (int i = 1; i <= num; i++) {
        result = result * i;
    }
    return result;
}

int main()
{

    cout << factorial(5);

    return 0;
}