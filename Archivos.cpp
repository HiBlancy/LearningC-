#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream MyWriteFile("filename.txt"); // Create a text file

    MyWriteFile << "Files can be tricky, but it is fun enough!"; // Write to the file

    MyWriteFile.close(); // Close the file

    string myText; // Create a text string, which is used to output the text file

    ifstream MyReadFile("filename.txt");// Read from the text file

    // Use a while loop together with the getline() function to read the file line by line
    while (getline(MyReadFile, myText)) {
        cout << myText;
    }

    MyReadFile.close(); //cierre del archivo
}

/*Para leer desde un archivo, use la clase ifstream o fstream y el nombre del archivo.

Tenga en cuenta que también utilizamos un bucle while junto con la función getline() 
(que pertenece a la clase ifstream) para leer el archivo línea por línea e imprimir el contenido del archivo:*/