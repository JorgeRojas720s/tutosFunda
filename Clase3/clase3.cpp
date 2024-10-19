#include <iostream>
using namespace std;

// Escribe un programa en C++ que solicite al usuario que ingrese su edad. El programa debe clasificar la edad en una de las siguientes categorías:

// Si la edad está entre 0 y 12 años (inclusive), imprime "Niño".
// Si la edad está entre 13 y 17 años (inclusive), imprime "Adolescente".
// Si la edad está entre 18 y 64 años (inclusive), imprime "Adulto".
// Si la edad es 65 años o más, imprime "Adulto mayor".
// Si la edad es negativa o mayor que 120, imprime "Edad no válida".



string clasificarCalificaciones(int calificacion)
{
    if (calificacion >= 0 && calificacion <= 59)
    {
        return "aprobado";
    }
    else if (calificacion >= 60 && calificacion <= 79)
    {
        return "notable";
    }
    else if (calificacion >= 80 && calificacion <= 100)
    {
        return "sobresaliente";
    }
    else
    {
        return "calificacion invalida";
    }
}

int main()
{

    float notas;

    while (notas > -1)
    {
        std::cout << "Ingrese la calificacion del estudiante (o -1 para terminar): ";
        std::cin >> notas;

        if (notas == -1)
        {
            break;
        }

        std::string resultado = clasificarCalificaciones(notas);
        std::cout << "Clasificacion: " << resultado << std::endl;
    }
    return 0;
}