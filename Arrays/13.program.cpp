#include <iostream>

using namespace std;

int main() {

    // arrays

    int marks[] = {45, 67, 89, 44};

    // printing the marks

    for (int i = 0 ; i < 4 ; i++) {
        cout << marks[i] << " ";
    }
    cout << endl;

    // pointers and arrays

    int* ptr = marks; // it is equivalent to int* ptr = &marks[0]

    for (int i = 0 ; i < 4 ; i++) {
        cout << *ptr << " ";
        ptr++;
    }
    cout << endl;

    return 0;

}