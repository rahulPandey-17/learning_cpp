// constructor

#include <iostream>

using namespace std;

class Complex {

    int real, img;

    public :

        void print();
        Complex();
        Complex(int, int);

};

Complex :: Complex() {

    real = 0;
    img = 0;

    cout << "The default values are" << endl;
}

Complex :: Complex(int real, int img) {
    this -> real = real;
    this -> img = img;
}

void Complex :: print() {
    cout << real << " + i" << img << endl;
}

int main() {

    Complex c;
    c.print();

    return 0;

}