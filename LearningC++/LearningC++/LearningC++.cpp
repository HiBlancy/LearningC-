/*Al ejecutar código C++ pueden ocurrir diferentes errores: 
errores de codificación cometidos por el programador, errores por entradas 
incorrectas u otras cosas imprevisibles.

Cuando ocurre un error, C++ normalmente se detendrá y generará un mensaje de error. 
El término técnico para esto es: C++ generará una excepción (arrojará un error).*/

/*El manejo de excepciones en C++ consta de tres palabras clave: intentar, lanzar y atrapar:
La declaración try le permite definir un bloque de código que se probará en busca de errores mientras se ejecuta.
La palabra clave throw genera una excepción cuando se detecta un problema, lo que nos permite crear un error personalizado.
La declaración catch le permite definir un bloque de código que se ejecutará si ocurre un error en el bloque try.
Las palabras clave try and catch vienen en pares*/

#include <iostream>
using namespace std;

int main() {
    try {
        int age = 15;
        if (age >= 18) {
            cout << "Access granted - you are old enough.";
        }
        else {
            throw (age);
        }
    }
    catch (int myNum) {
        cout << "Access denied - You must be at least 18 years old.\n";
        cout << "Age is: " << myNum;
    }
    return 0;
}

/*Usamos el bloque try para probar algún código: si la variable edad 
es menor que 18, lanzaremos una excepción y la manejaremos en nuestro bloque catch.

En el bloque catch, detectamos el error y hacemos algo al respecto. La declaración 
catch toma un parámetro: en nuestro ejemplo usamos una variable int (myNum) (porque estamos 
lanzando una excepción de tipo int en el bloque try (edad)), para generar el valor de edad.

Si no se produce ningún error (por ejemplo, si la edad es 20 en lugar de 15, lo que 
significa que será mayor que 18), se omite el bloque catch:*/