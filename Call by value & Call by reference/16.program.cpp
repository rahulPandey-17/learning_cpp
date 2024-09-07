#include <iostream>

using namespace std;

// call by value

// int sum(int num1, int num2) {
//     num1 = 100;
//     return num1 + num2;
// }

// call by reference using pointers

// int sum(int* num1, int* num2) {
//     *num1 = 100;
//     return *num1 + *num2;
// }

// call by reference using reference variables (a special c++ feature)

int sum (int &num1, int &num2) {
    num1 = 120;
    return  num1 + num2;
}

int main() {

    int num1, num2;

    cout << "Enter num1 : ";
    cin >> num1;
    cout << "Enter num2 : ";
    cin >> num2;

    // call by value

    // cout << "The sum of " << num1 << " and " << num2 << " is " << sum(num1, num2);  // arguments are passed via call by value method
    // cout << "\nAfter calling and altering the value of num1 via call by value method\n";
    // cout << "Original value of num1 is " << num1 << endl; // in call by value method original values dosent changes, because a copy of the values is passed to the function

    // call by reference

    // cout << "The sum of " << num1 << " and " << num2 << " is " << sum(&num1, &num2);  // arguments are passed via call by reference method(using pointers)
    // cout << "\nAfter calling and altering the value of num1 via call by reference method\n";
    // cout << "Original value of num1 is " << num1 << endl; // in call by reference method original values changes, because there memory addresses are passed to the function

    cout << "The sum of " << num1 << " and " << num2 << " is " << sum(num1, num2);  // arguments are passed via call by reference method(using reference variables)
    cout << "\nAfter calling and altering the value of num1 via call by reference method\n";
    cout << "Original value of num1 is " << num1 << endl; // in call by reference method original values changes, because there memory addresses are passed to the function

    return 0;

}