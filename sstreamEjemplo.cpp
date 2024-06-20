#include <iostream>
#include <string>
#include <sstream>

using namespace std;
int main()
{
    string textExp;
    float FTemp = 0;
    float CTemp = 0;

    cout << "Enter a Farenheit temperature: ";
    getline(cin, textExp);
    stringstream(textExp) >> FTemp; //stringstream obtiene el texto itroducido y lo convierte en otro tipo de variable si es necesario

    CTemp = (FTemp - 32.0) / (9.0 / 5.0);

    cout << "\n" << FTemp << " in farenheit = " << CTemp << " in Celcius\n";
    return 0;
}

/*En resumen, std::stringstream se usa para manipular y convertir datos dentro del programa, mientras que std::cout 
se usa para mostrar datos al usuario. Ambos tienen propósitos diferentes y se utilizan en contextos distintos.*/