#include <iostream>

using namespace std;

//recursion for factorial

int facto(int num) {

    if (num == 0 || num == 1) {
        return 1;
    }

    return num * facto(num - 1);

}

// recursion for fibonacci series

int fibo(int n) {

    if (n == 0) {
        return 0;
    }

    if (n == 1) {
        return 1;
    }

    return fibo(n - 1) + fibo(n - 2);

}

int main() {

    int num;

    cout << "Enter the number : ";
    cin >> num;

    cout << "The factorial of " << num << " is " << facto(num) << endl;

    int n;

    cout << "Enter the no. of digits of fibonacci you want to see : ";
    cin >> n;

    for (int i = 0 ; i < n ; i++) {
        cout << fibo(i) << " ";
    }
    cout << endl;

    return 0;

}