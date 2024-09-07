#include <iostream>

using namespace std;

int main() {

    // if-else

    int age;

    cout << "Enter your age : ";
    cin >> age;

    if (age < 18) {
        cout << "You cannot come to the party!" << endl;
    }
    else if (age == 18) {
        cout << "You will get a kid pass" << endl;
    }
    else {
        cout << "You can come to the party" << endl;
    }
    
    return 0;

}