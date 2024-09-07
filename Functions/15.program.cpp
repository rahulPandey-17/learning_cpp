#include <iostream>

using namespace std;

// sum function

int sum(int num1, int num2) {
    return num1 + num2;
}

int main() {

    // functions

    int num1, num2;

    cout << "Enter num1 : ";
    cin >> num1;
    cout << "Enter num2 : ";
    cin >> num2;

    cout << "The sum of " << num1 << " and " << num2 << " is " << sum(num1, num2) << endl;

    return 0;

}