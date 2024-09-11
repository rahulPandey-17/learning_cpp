#include <iostream>

using namespace std;

// forward declaration
class Complex;

class Calculator {

    public :
        int add(int, int);
        int real(Complex, Complex);
        int img(Complex, Complex);

};

class Complex {

    int a, b;

    public :
        void setNumber(int, int);
        void printNumber();
        // friend int Calculator :: real(Complex, Complex);
        // friend int Calculator :: img(Complex, Complex);
        friend class Calculator;

};

void Complex :: setNumber(int a, int b) {
    this -> a = a;
    this -> b = b;
}

int Calculator :: add(int a, int b) {
    return a + b;
}

int Calculator :: real(Complex c1, Complex c2) {
    return c1.a + c2.a;
}

int Calculator :: img(Complex c1, Complex c2) {
    return c1.b + c2.b;
}

int main() {

    Complex c1, c2;
    c1.setNumber(10, 12);    
    c2.setNumber(10, 22);

    Calculator calc;
    cout << calc.real(c1, c2) << endl;    
    cout << calc.img(c1, c2) << endl;    

    return 0;

}