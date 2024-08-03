## 🔴Tipos de Variables

```cpp
tipo nombre;  ✏️ Declaracion de una variable

 int edad = 25;                  ✔️ Almacena números enteros (sin decimales).
 float altura = 1.75;            ✔️ Almacena números con decimales.
 double pi = 3.141592653589793;  ✔️ Similar a float, pero con mayor precisión.
 bool d = true;                  ✔️ Almacena valores true o false.
 char letra = 'A';               ✔️ Almacena un solo carácter.
 string f = "Hola Mundo";        ✔️ Cadena de Caracteres.
```

## 🔴Operadores Aritméticos

| Operador | Descripción                                                      |
|----------|------------------------------------------------------------------|
| **+** | Suma                                                                |
| **-** | Resta                                                               |
| **\*** | Multiplicación                                                     |
| **/** | Divide un valor entre otro, si no es entero deshecha los decimales. |
| **%** | Residuo de la División / Módulo                                     |
-------------------------------------------------------------------------------

## 🔴 Operadores de Comparación

| Operador | Descripción    |
|----------|----------------|
| **==**  | Igual a         |
| **!=**  | Diferente a     |
| **>**   | Mayor que       |
| **<**   | Menor que       |
| **>=**  | Mayor o Igual a |
| **<=**  | Menor o Igual a |
-----------------------------

## 🔴 Operadores Lógicos

| Operador | Descripción    |
|----------|----------------|
| **&&** | AND / Y          |
| **\|\|** | OR / O         |
| **!**  | NOT / Negación   |
-----------------------------

## 🔴 Condicionales

### ✔️ `if`
Permite ejecutar un bloque de código si una condición es verdadera.

```cpp
if (edad >= 18) {
    std::cout << "Eres mayor de edad." << std::endl;
}
```

### ✔️`if-else`
Permite ejecutar un bloque de código si una condición es verdadera y otro bloque si la condición es falsa.
```cpp
if (edad >= 18) {
    std::cout << "Eres mayor de edad." << std::endl;
} else {
    std::cout << "Eres menor de edad." << std::endl;
}
```

### ✔️`if-else if-else` 
Permite verificar múltiples condiciones en secuencia.
```cpp
int nota = 85;

if (nota >= 90) {
    std::cout << "Calificación: A" << std::endl;
} else if (nota >= 80) {
    std::cout << "Calificación: B" << std::endl;
} else if (nota >= 70) {
    std::cout << "Calificación: C" << std::endl;
} else {
    std::cout << "Calificación: D" << std::endl;
}
```

### ✔️`switch`
Permite seleccionar uno de varios bloques de código a ejecutar basándose en el valor de una expresión.
```cpp
int dia = 3;

switch (dia) {
    case 1:
        std::cout << "Lunes" << std::endl;
        break;
    case 2:
        std::cout << "Martes" << std::endl;
        break;
    case 3:
        std::cout << "Miércoles" << std::endl;
        break;
    case 4:
        std::cout << "Jueves" << std::endl;
        break;
    case 5:
        std::cout << "Viernes" << std::endl;
        break;
    default:
        std::cout << "Fin de semana" << std::endl;
        break;
}
```
## 🔴 Bucles

### ✔️ `for`
Se usa cuando sabes cuántas veces necesitas repetir un bloque de código.
```cpp
     for (int i = 0; i < 5; i++) {
        std::cout << "Iteración: " << i << std::endl;
    }
```

### ✔️ `while`
Se usa cuando no sabes cuántas veces necesitas repetir el código y quieres que el bucle se ejecute mientras se cumpla una condición.
```cpp
    int i = 0;
    while (i < 5) {
        std::cout << "Iteración: " << i << std::endl;
        i++; // Actualizar la condición
    }
```

### ✔️ `do-while`
Es similar al bucle while, pero garantiza que el bloque de código se ejecute al menos una vez, ya que la condición se evalúa después de ejecutar el bloque.
```cpp
  int i = 0;
    do {
        std::cout << "Iteración: " << i << std::endl;
        i++; // Actualizar la condición
    } while (i < 5);
```

## 📝`Nota`
Uso de ``break`` y ``continue``
🟡break: Sale del bucle inmediatamente.
🟡continue: Salta la iteración actual y pasa a la siguiente.
```cpp
     for (int i = 0; i < 10; i++) {
        if (i == 5) {
            break; // Sale del bucle cuando i es 5
        }
        if (i % 2 == 0) {
            continue; // Salta la iteración actual si i es par
        }
        std::cout << "i: " << i << std::endl;
    }
``


