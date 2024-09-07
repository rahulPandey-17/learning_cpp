#include <iostream>

using namespace std;

int main() {

    int num = 10;
    int* ptr = &num;

    cout << "The address of variable num is " << ptr << endl;
    cout << "The value inside variable num is " << *ptr << endl;

    // pointer to a pointer

    int** ptr_1 = &ptr; // int** means a pointer(*) of type int to another int pointer (int*)
    cout << "\nThe address of ptr is " << ptr_1 << endl;
    cout << "The value inside ptr is " << **ptr_1 << endl;

    return 0;

}