#include <iostream>
using namespace std;

class Employee {
private:
    int salary;

public:
    void setSalary(int s) {
        salary = s;
    }
    int getSalary() {
        return salary;
    }
};

int main() {
    Employee myObj;
    myObj.setSalary(50000);
    cout << myObj.getSalary();
    return 0;
}

/*El atributo salario es privado y tiene acceso restringido.

El método público setSalary() toma uno o varios parámetros y los asigna al atributo de salario (salario = s).

El método público getSalary() devuelve el valor del atributo de salario privado.

Dentro de main(), creamos un objeto de la clase Empleado. Ahora podemos usar el método setSalary() 
para establecer el valor del atributo privado en 50000. Luego llamamos al método getSalary() en el objeto para devolver el valor.*/