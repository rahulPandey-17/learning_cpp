#include <iostream>

using namespace std;

// inline function

inline int product (int num1, int num2) {  // use inline function when function is small
    return num1 * num2;
}

// default arguments

int moneyRecieved (int currentMoney, float factor = 1.04) {
    return currentMoney * factor;
}


int main() {

    // int num1, num2;

    // cout << "Enter num1 : ";
    // cin >> num1;
    // cout << "Enter num2 : ";
    // cin >> num2;

    // cout << "The product of " << num1 << " and " << num2 << " is " << product(num1, num2) << endl;
    // cout << "The product of " << num1 << " and " << num2 << " is " << product(num1, num2) << endl;
    // cout << "The product of " << num1 << " and " << num2 << " is " << product(num1, num2) << endl;
    // cout << "The product of " << num1 << " and " << num2 << " is " << product(num1, num2) << endl;

    int money = 100000;
    cout << "Adding the factor final amount is " << moneyRecieved(money, 1.1) << endl;

    return 0;

}