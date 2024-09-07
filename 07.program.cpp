#include <iostream>
#include <typeinfo>  // we have included this header file to use typeid().name() function

using namespace std;

int main() {

    // the default type of floating point numbers in c++ is double, we can also check it using sizeof() operator

    cout << "The size of 54.25 is " << sizeof(54.25) << endl; // it will show size of the literal 8 bytes, which is the size of double in c++.

    float var = 34.4; // in this line, 34.4 is treated as double and then it is implicitly casted as float(because i mentioned float as the data-type)

    float var_2 = 33.56f; // to store float values without any implicit casting, we have to use "f" at the end of the literal.

    // typeid().name() tells us the data-type of a variable

    cout << "The type of variable var is " << typeid(var).name() << endl;
    cout << "The type of variable var2 is " << typeid(var_2).name() << endl;

    // **************Reference Variables**************

    int var_3 = 344;
    int &var_4 = var_3;

    cout << "The value of var_3 is " << var_3 << endl;
    cout << "The value of var_4 is " << var_4 << endl;
    
    return 0;

}