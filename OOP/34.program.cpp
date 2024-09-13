// Inheritance

#include <iostream>

using namespace std;

class Employee {

    int id;
    float salary;

    public :
        Employee();
        Employee(int, float);
        void showDetails();

};

class Programmer : public Employee {

    string department;
    int code;

    public :
        Programmer();
        Programmer(string, int);
        void showData();

};

void Employee :: showDetails() {
    cout << "ID : " << id << endl;
    cout << "Salary : " << salary << endl;
}

Employee :: Employee() {
    id = 0;
    salary = 50000;
}

Employee :: Employee(int id, float salary) {
    this -> id = id;
    this -> salary = salary;
}

Programmer :: Programmer() {
    department = "";
    code = 0;
}

Programmer :: Programmer(string department, int code) {
    this -> department = department;
    this -> code = code;
}

void Programmer :: showData() {
    cout << "Department : " << department << endl;
    cout << "Code : " << code << endl;
}

int main() {

    {
        Employee rahul(1001, 200000);
        rahul.showDetails();
    }

    {
        Programmer rahul("DevOps", 1002);
        rahul.showData();
    } 

    return 0;

}