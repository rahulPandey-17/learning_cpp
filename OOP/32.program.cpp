#include <iostream>

using namespace std;

class Number {

    int num;

    public :
        Number(int);
        Number();
        void display();

        // copy constructor
        // Number(Number &);

};

Number :: Number() {
    num = 0;
}

Number :: Number(int num) {
    this -> num = num;
}

// Number :: Number(Number &obj) {
//     num = obj.num;
// }

void Number :: display() {
    cout << "Number is " << num << endl;
}

int main() {

    Number x, y, z;

    x = Number(20);
    y = Number(x);
    z = Number(40);

    x.display();
    y.display();
    z.display();

    return 0;

}