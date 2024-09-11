#include <iostream>

using namespace std;

class Complex {

    int a, b;

    public :
        void setNumber(int, int);
        void printNumber();
        friend Complex sumNumber(Complex, Complex);

};

void Complex :: setNumber(int a, int b) {
    this -> a = a;
    this -> b = b;
}

void Complex :: printNumber() {
    cout << "Your number is " << a << " + i" << b << endl;
}

Complex sumNumber(Complex c1, Complex c2) {
    Complex sum;
    sum.setNumber((c1.a + c2.a), (c1.b + c2.b));
    return sum;
}

int main() {

    Complex c1, c2, sum;
    c1.setNumber(1, 4);
    c2.setNumber(5, 8);


    c1.printNumber();
    c2.printNumber();

    sum = sumNumber(c1, c2);
    sum.printNumber();

    return 0;

}