#include <iostream>

using namespace std;

// multiple inheritance

class Base_1 {

    protected :

        int value_1;

    public :

        void setValue_1(int);

};

class Base_2 {

    protected :

        int value_2;

    public :

        void setValue_2(int);

};

class Derived : public Base_1, public Base_2 {

    public :

        void show();

};

void Base_1 :: setValue_1(int value_1) {
    this -> value_1 = value_1;
}

void Base_2 :: setValue_2(int value_2) {
    this -> value_2 = value_2;
}

void Derived :: show() {
    cout << "value_1 : " << value_1 << endl;
    cout << "value_2 : " << value_2 << endl;
    cout << "sum : " << value_1 + value_2 << endl;
}

int main() {

    Derived d;
    d.setValue_1(12);
    d.setValue_2(22);
    d.show();

    return 0;

}