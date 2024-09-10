#include <iostream>

using namespace std;

class Employee {

    static int count;
    int id;

    public :
        void setData(void);
        void getData(void);

        // static function
        static void emp_no(void);

};

void Employee :: setData() {
    count++;
    cout << "Enter employee ID : ";
    cin >> id;
}

void Employee :: getData() {
    cout << "Employee ID : " << id << endl;
}

void Employee :: emp_no() {
    cout << "\nTotal no. of employee's are " << count << endl;
}

int Employee :: count;

int main() {

    Employee e1, e2, e3;

    e1.setData();
    e2.setData();
    e3.setData();

    e1.getData();
    e2.getData();
    e3.getData();

    Employee :: emp_no();

    return 0;

}