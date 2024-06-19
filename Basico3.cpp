#include <iostream>
#include <cmath>

using namespace std; //utilizando esta librebria no hace falta ponerla delante del cout std::cout

struct car {
    string brand;
    string model;
    int year;
}; //struct con nombre se crea fuera del main, este se llama car

enum Level {
    LOW = 5,
    MEDIUM, //si estableces el primero y el resto no, estos iran en orden, por lo que seria 6 y 7. Si no tiene establecido empieza por 0.
    HIGH
}; //tambien fuera del main

int main()
{
    //STRUCTS
    /*
    struct {
        string brand;
        string model;
        int year;
    } myCar1, myCar2; //nombres del struct */

    car myCar1;
    myCar1.brand = "BMW";
    myCar1.model = "X5";
    myCar1.year = 1999;

    car myCar2;
    myCar2.brand = "Ford";
    myCar2.model = "Mustang";
    myCar2.year = 1969;

    cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n"; //acceder al struct con su nombre . y la variable deseada
    cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";

    //ENUMS
    enum Level myVar = HIGH;
    cout << myVar << "\n";

    //REFERENCIAS y PUNTEROS
    string food = "Pizza";  // food variable
    string& meal = food;    // reference to food
    string* ptr = &food; //almacena la dirección de memoria como su valor

    cout << food << "\n" << meal << "\n"; //sacan el mismo mensaje en pantalla
    cout << &food << "\n"; //obtiene la direccion de memoria de la variable
    cout << ptr << "\n";
    cout << *ptr; //saca lo que tiene alamcenado pero su variable
    return 0;
}