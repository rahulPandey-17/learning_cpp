// program to swap values of private data members of two classes

#include <iostream>

using namespace std;

class Y;

class X {

    int num_x;

    public :
        void setNum(int);
        void display();
        friend void swap(X &, Y &);

};

class Y {

    int num_y;

    public :
        void setNum(int);
        void display();
        friend void swap(X &, Y &);

};

void X :: setNum(int num_x) {
    this -> num_x = num_x;
}

void Y :: setNum(int num_y) {
    this -> num_y = num_y;
}

void X :: display() {
    cout << "Value of num in class X is " << num_x << endl;
}

void Y :: display() {
    cout << "Value of num in class Y is " << num_y << endl;
}

void swap(X &obj_x, Y &obj_y) {

    int temp = obj_y.num_y;
    obj_y.num_y = obj_x.num_x;
    obj_x.num_x = temp;

    cout << "\nAfter swapping the values of the private data of class X and class Y, we have\n" << endl;
    cout << "Value of num in class X is " << obj_x.num_x << endl;
    cout << "Value of num in class Y is " << obj_y.num_y << endl;

}

int main() {

    X obj_x;
    obj_x.setNum(10);
    obj_x.display();

    Y obj_y;
    obj_y.setNum(12);
    obj_y.display();

    swap(obj_x, obj_y);

    return 0;

}