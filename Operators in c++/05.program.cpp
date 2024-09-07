#include <iostream>

using namespace std;

int main() {

    cout << "Following are the types of  arithmetic operators used in c++\n";
    
    int num1 = 30, num2 = 45;

    cout << "\nAddition (num1 + num2) : " << num1 + num2 << endl; 
    cout << "Subraction (num1 - num2) : " << num1 - num2 << endl; 
    cout << "Multiplication (num1 * num2) : " << num1 * num2 << endl; 
    cout << "Division (num1 / num2) : " << (float) num1 / num2 << endl; 
    cout << "Modulo (num1 % num2) : " << num1 % num2 << endl; 
    cout << "Pre increment (++num1) : " << ++num1 << endl; 
    cout << "Pre decrement (--num1) : " << --num1 << endl; 
    cout << "Post increment (num1++) : " << num1++ << endl; 
    cout << "Post decrement (num1--) : " << num1-- << endl;

    cout << "\nFollowing are the types of comparison operators used in c++\n";

    int x = 4, y = 2;

    cout << "\nEqual to (==) : " << (x == y) << endl; 
    cout << "Not-Equal to (!=) : " << (x != y) << endl; 
    cout << "Smaller than (<) : " << (x < y) << endl; 
    cout << "Greater than (>) : " << (x > y) << endl; 
    cout << "Smaller-than-or-Equal to (<=) : " << (x <= y) << endl; 
    cout << "Greater-than-or-Equal to (>=) : " << (x >= y) << endl; 

    return 0;

}