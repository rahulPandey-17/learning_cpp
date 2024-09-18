#include <iostream>

using namespace std;

// ambiguity resolution

class Base_1 {

    public :

        void greet() {
            cout << "How are you?" << endl;
        }

};

class Base_2 {

    public :

        void greet() {
            cout << "How are ya?" << endl;
        }

};

class Derived : public Base_1, public Base_2 {

    public :

        void greet() {
            Base_2 :: greet();
        }

};

class B {

    public :

        void say() {
            cout << "Hello, World!" << endl;
        }

};

class D : public B{

    public :

        void say() {
            cout << "Hello, World!!" << endl;
        }

};

int main() {

    /*

    Ambiguity 1

    Base_1 obj1;
    Base_2 obj2;
    Derived obj3;

    obj1.greet();
    obj2.greet();
    obj3.greet();
    */

    // Ambiguity 2

    B obj4;
    D obj5;

    obj4.say();
    obj5.say();

    return 0;

}