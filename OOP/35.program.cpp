#include <iostream>

using namespace std;

class Base {

    int value_1;

    public :

        int value_2;
        void setValue(int);
        int getValue();

};

void Base :: setValue(int value_1) {
    this -> value_1 = value_1;
}

int Base :: getValue() {
    return value_1;
}

class Derived : public Base {

    int value_3;

    public :

        int process();
        void display();

};

int Derived :: process() {
    value_3 = getValue() * value_2;
    return value_3;
}

void Derived :: display() {
    cout << "Value 1 : " << getValue() << endl;
    cout << "Value 2 : " << value_2 << endl;
    cout << "Value 3 : " << value_3 << endl;
}

int main() {

    Derived obj;
    obj.setValue(10);
    obj.value_2 = 20;
    obj.process();
    obj.display();

    return 0;

}