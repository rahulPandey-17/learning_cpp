#include <iostream>

using namespace std;

int sum = 50;

int main() {

    // use of scope resolution operator

    int num1, num2;

    cout << "Enter the value of num1 : ";
    cin >> num1;
    cout << "Enter the value of num2 : ";
    cin >> num2;

    cout << "The sum is " << num1 + num2 << endl;
    cout << "The value of global sum is " << ::sum << endl;
    
    return 0;

}