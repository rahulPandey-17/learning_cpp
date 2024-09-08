#include <iostream>

using namespace std;

// integer

int sum(int num1, int num2) {
    return num1 + num2;
}

// double

double sum(double num1, double num2) {
    return num1 + num2;
}

// 3 arguments

int sum(int num1, int num2, int num3) {
    return num1 + num2 + num3;
}

int main() {

    cout << "The sum is " << sum(10.22, 20.15) << endl;
    cout << "The sum is " << sum(10, 20) << endl;
    cout << "The sum is " << sum(10, 20, 30) << endl;

    return 0;

}