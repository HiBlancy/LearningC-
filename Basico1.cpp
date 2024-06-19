#include <iostream>
#include <cmath>

using namespace std; //utilizando esta librebria no hace falta ponerla delante del cout std::cout

int variableEjemplo = 89;
bool boolEjemplo = true;

int main()
{
    //MENSAJES BASICOS EN PANTALLA
    cout << "Hello World!\n"; //\n para salto de linea
    cout << 56; //para numero no hace falta las comillas
    cout << variableEjemplo << endl; //para mostrar la variable tampoco endl es lo mismo que \n
    cout << boolEjemplo << "\n"; //1 = true, 0 false

    cout << "El numero es " << variableEjemplo << "\n";

    //TABLA
    int a = 45;
    float b = 45.323;
    double c = 45.5468;
    int aa = a + 9;
    float bb = b + 9;
    double cc = c + 9;
    int aaa = aa + 9;
    float bbb = bb + 9;
    double ccc = cc + 9;

    cout << "Int" << "\tFloats" << "\tDoubles\n";
    cout << a << "\t" << b << "\t" << c << "\n";
    cout << aa << "\t" << bb << "\t" << cc << "\n";
    cout << aaa << "\t" << bbb << "\t" << ccc << "\n";

    //OBTENER ELEMENTOS DE UN STRING
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt string is: " << txt.length() << "\n";
    cout << txt[4] << "\n"; //saca en pantalla la letra en posicion 5
    cout << txt[txt.length() - 1] << "\n"; //ultima posicion
    txt[0] = '7'; //modifica el de la posicion
    cout << txt << "\n";

    //SUMA BASICA PIDINEDO DOS NUEMROS
    int x, y;
    int sum;
    cout << "Primer num ";
    cin >> x; //pide un int por consola, cin para ingresar y >> para leer
    cout << "Segundo num ";
    cin >> y;
    sum = x + y;
    cout << sum;

    //OPERACIONES 
    cout << sqrt(64) << "\n"; //raiz cuadrada, estas requieren #include <cmath> para poder utilizarse 
    cout << round(2.6) << "\n"; //redondear
    cout << log(2) << "\n"; //logarismo

    //IF / ELSE y MANERA CORTA EN HACERLO CON ? 
    int time = 20;

    if (time < 18) cout << "Good day." << "\n";
    else  cout << "Good evening." << "\n";

    string result = (time < 18) ? "Good day." : "Good evening."; //la primera se refiere a true y la segnda a false lo que esta antes del interrogante
    cout << result << "\n";
}