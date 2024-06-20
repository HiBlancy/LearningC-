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
    stringstream(textExp) >> FTemp;

    CTemp = (FTemp - 32.0) / (9.0 / 5.0);

    cout << "\n" << FTemp << " in farenheit = " << CTemp << " in Celcius\n";
    return 0;
}