#include <iostream>

using namespace std;

// structure

typedef struct employee {

    string name;
    int id;
    float salary;

}Emp;

// union

typedef union money {

    int rice;
    char car;
    float pound;

}M;

int main() {

    // Emp e1;

    // e1.name = "Rahul Pandey";
    // e1.id = 1001;
    // e1.salary = 200000;

    // cout << e1.name << endl;
    // cout << e1.id << endl;
    // cout << e1.salary << endl;

    // M m1;

    // m1.rice = 34;
    // m1.car = 'J';
    // m1.pound = 34.45; // only this will give correct output, because memory is shared in union so that last overridden value will be considered if more than one value is there.
    // cout << m1.pound << endl;

    enum meals {breakfast, lunch, dinner};

    cout << breakfast << endl;
    cout << lunch << endl;
    cout << dinner << endl;

    return 0;

}