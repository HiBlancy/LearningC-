#include <iostream>
using namespace std;

class Vehicle {
public:
    string brand = "Ford";
    void honk() {
        cout << "Tuut, tuut! \n";
    }
};

class Car : public Vehicle {
public:
    string model = "Mustang";
};

class GrandChild : public Car { //Clase deriva de otra clase
public:
    string text = "some text";
};

class OtherClass {
public:
    void myOtherFunction() {
        cout << "Some content in another class.";
    }
};

class MultipleInheritance : public Car, public OtherClass {

};

int main() {
    GrandChild myCar;
    myCar.honk();
    cout << myCar.brand + " " + myCar.model + " " + myCar.text;

    MultipleInheritance mySecondObj;
    mySecondObj.myOtherFunction();

    return 0;
}