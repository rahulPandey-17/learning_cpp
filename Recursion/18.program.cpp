#include <iostream>

using namespace std;

//recursion

int facto(int num) {

    if (num == 0 || num == 1) {
        return 1;
    }

    return num * facto(num - 1);

}

int main() {

    int num;

    cout << "Enter the number : ";
    cin >> num;

    cout << "The factorial of " << num << " is " << facto(num) << endl;

    return 0;

}