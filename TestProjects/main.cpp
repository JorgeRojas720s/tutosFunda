#include <iostream>  //  entrada y salida 
#include <cstdlib>   //  std::strtof

// Funciones básicas
float addition(float a, float b) {
    return a + b;
}

float subtraction(float a, float b) {
    return a - b;
}
float division(float a, float b) {
    if (b != 0)
        return a / b;

    else {
        std::cout << "Error: Division por cero" << std::endl;
        return 0;
    }
}
float multiplication(float a, float b) { return a * b; }



void realizCalculo() {
    float a, b;
    std::float operador;

    // Pedir al usuario los valores y el operador
    std::cout << "\nIntroduce el valor de a: ";
    float inputA;
    std::cin >> inputA;
    if (!convertirAFlotante(inputA, a)) {
        std::cout << "Error: Entrada para 'a' no valida" << std::endl;
        return;
    }

    std::cout << "Introduce el valor de b: ";
    float inputB;
    std::cin >> inputB;
    if (!convertirAFlotante(inputB, b)) {
        std::cout << "Error: Entrada para 'b' no valida" << std::endl;
        return;
    }
    
    std::cout << "Introduce el operador (+, -, *, /): ";
    std::cin >> operador;

    

    float resultado;

    if (operador == "+") {
        resultado = addition(a, b);
    }
    else if (operador == "-") {
        resultado = subtraction(a, b);
    }
    else if (operador == "*") {
        resultado = multiplication(a, b);
    }
    else if (operador == "/") {
        resultado = division(a, b);
    }
    else if (operador == "=") {
        exit = true;
    }
    else {
        std::cout << "Error: Operador no valido" << std::endl;
        return;
    }
    

    std::cout << "Resultado: " << resultado << std::endl;
}

int main() {
    int opcion = 0;
    bool exit = false;



      /*  if (opcion == 1) {
            realizCalculo();
        }
        else if (opcion == 2) {
            std::cout << "Saliendo del programa..." << std::endl;
            break;
        }
        else {
            std::cout << "Opcion no valida. Por favor, elige una opcion del menu." << std::endl;
        }*/
    
   
        std::cout << "\n===================================" << std::endl;
        std::cout << "      *** Calculadora ***" << std::endl;
        std::cout << "===================================" << std::endl;
        std::cout << "1. Realizar un calculo" << std::endl;
        std::cout << "2. Salir" << std::endl;
        std::cout << "-----------------------------------" << std::endl;
        std::cout << "Elige una opcion: ";
        std::cin >> opcion;

    
    return 0;
}