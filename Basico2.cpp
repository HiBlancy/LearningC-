#include <iostream>
#include <string> 

using namespace std; //utilizando esta librebria no hace falta ponerla delante del cout std::cout

int main()
{ 
    //PREGUNTA NOMBRE EN PANTALLA Y LO MUESTRA RESPETANDO ESPACIOS
    string fullName;
    cout << "Type your full name: ";
    getline(cin, fullName); // requiere #include <string> para funcionar, getline respeta os espacios, sin el solo pillaria el primer string
    cout << "Your name is: " << fullName;

    //ARRAYS
    int myNumbers[5] = { 10, 20, 30, 40, 50 };
    for (int i : myNumbers) { //foreach loop for (type variableName : arrayName)
        cout << i << "\n";
    }

    string cars[5] = { "Volvo", "BMW", "Ford", "Mazda", "Seat" };
    cout << cars[0] << "\n"; //imprime el primer lugar

    for (int i = 0; i < 5; i++)// for (int i = 0; i < sizeof(myNumbers) / sizeof(int); i++)    >     for (int i = 0; i < 5; i++)
    {
        cout << cars[i] << "\n"; //imprime todos en orde, como esta \n uno cada linea
    }

    cout << sizeof(cars) << "\n"; //saca el resultado en bytes

    int getArrayLenght = sizeof(cars) / sizeof(string); //para el numero total de elementos en el array = sizeof(nombreArray) / sizeof (tipoDeArray)
    cout << getArrayLenght << "\n";

    //ARRAY MULTIDIMENSIONALES
    string letters[2][4] = {
    { "A", "B", "C", "D" },
    { "E", "F", "G", "H" }
    };

    cout << letters[0][2] << "\n";

    letters[0][0] = "Z"; //Ahora la A es Z
    cout << letters[0][0] << "\n";

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            cout << letters[i][j] << "\n";
        }
    }

    string letters2[2][2][2] = //Array 3dimensional
    { { { "A", "B" },
      { "C", "D" } },
    { { "E", "F" },
      { "G", "H" } } };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                cout << letters2[i][j][k] << "\t";
            }
        }
    }

    return 0;
}