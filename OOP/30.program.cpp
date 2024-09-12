#include <iostream>

using namespace std;

// constructor with default arguments

class Display {

    int x, y;

    public :
        Display(int, int);
        void print();

};

Display :: Display(int x, int y = 12) {
    this -> x = x;
    this -> y = y;
}

void Display :: print() {
    cout << x << endl;
    cout << y << endl;
}

int main() {

    Display d(12);
    d.print();

    return 0;

}