#include <iostream>

using namespace std;

// The variable below is also a global variable

int global = 20;

void display() {
    cout << "The value of global is " << global << endl; // This will print the value of the global declared outside the main func, beacuse the scope of global inside the main function is till the main func only, it doesn't exist here.
}

int main() {

    // scopes of variables

    // below all are global variables, as they are outside any function

    int a = 14, b = 20;
    float pi = 3.14;
    char ch = 'P';
    int global = 22;
    bool bl = true;

    cout << "The value of a is " << a << endl;
    cout << "The value of b is " << b << endl;
    cout << "The value of pi is " << pi << endl;
    cout << "The value of ch is " << ch << endl;
    cout << "The value of global is " << global << endl; // This will print value of global which is inside of the main func, because when we have the same name for  local and global variable, local variable takes precedence.
    cout << "The value of bl is " << bl << endl;

    display();

    return 0;

}