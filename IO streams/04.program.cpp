#include <iostream>

using namespace std;

int main() {

    // input/output streams

    int num1, num2;

    cout << "Enter the value of num1 : ";
    cin >> num1;
    cout << "Enter the value of num2 : ";
    cin >> num2;

    // printing the values

    cout << "You have entered the following values\n";
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
    cout << "The sum of " << num1 << " and " << num2 << " is : " << num1 + num2 << endl;
    
    return 0;

}