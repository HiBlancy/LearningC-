/*Al ejecutar c�digo C++ pueden ocurrir diferentes errores: 
errores de codificaci�n cometidos por el programador, errores por entradas 
incorrectas u otras cosas imprevisibles.

Cuando ocurre un error, C++ normalmente se detendr� y generar� un mensaje de error. 
El t�rmino t�cnico para esto es: C++ generar� una excepci�n (arrojar� un error).*/

/*El manejo de excepciones en C++ consta de tres palabras clave: intentar, lanzar y atrapar:
La declaraci�n try le permite definir un bloque de c�digo que se probar� en busca de errores mientras se ejecuta.
La palabra clave throw genera una excepci�n cuando se detecta un problema, lo que nos permite crear un error personalizado.
La declaraci�n catch le permite definir un bloque de c�digo que se ejecutar� si ocurre un error en el bloque try.
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

/*Usamos el bloque try para probar alg�n c�digo: si la variable edad 
es menor que 18, lanzaremos una excepci�n y la manejaremos en nuestro bloque catch.

En el bloque catch, detectamos el error y hacemos algo al respecto. La declaraci�n 
catch toma un par�metro: en nuestro ejemplo usamos una variable int (myNum) (porque estamos 
lanzando una excepci�n de tipo int en el bloque try (edad)), para generar el valor de edad.

Si no se produce ning�n error (por ejemplo, si la edad es 20 en lugar de 15, lo que 
significa que ser� mayor que 18), se omite el bloque catch:*/