#include <iostream>
#include <string> 
#include <cmath>

using namespace std; //utilizando esta librebria no hace falta ponerla delante del cout std::cout

int main()
{
    cout << sqrt(64) << "\n"; //raiz cuadrada, estas requieren #include <cmath> para poder utilizarse 
    cout << round(2.6) << "\n"; //redondear
    cout << log(2) << "\n"; //logarismo

    string fullName;
    cout << "Type your full name: ";
    getline(cin, fullName); // requiere #include <string> para funcionar, getline respeta os espacios, sin el solo pillaria el primer string
    cout << "Your name is: " << fullName;

    return 0;
}