#include <iostream>

using namespace std;

int main() {

    // constant

    const string name = "Rahul Pandey"; // cannot reassign 'name' identifier
    // name = "Saurabh"; // this will give error
    cout << name << endl;

    const int num = 12;
    // num = 22; // this will give error
    cout << num << endl;
    
    return 0;

}