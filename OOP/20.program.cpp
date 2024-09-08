#include <iostream>

using namespace std;

// class

class Student {

    private :
        int admNo;
        string email;
        string phoneNo;
    
    public :
        string name;
        int rollno;

        // setter function
        void setData(int, string, string, string, int);

        // getter function
        void getData();

};

void Student :: setData(int admNo, string email, string phoneNo, string name, int rollno) {

    this->admNo = admNo;
    this->email = email;
    this->phoneNo = phoneNo;
    this->name = name;
    this->rollno = rollno;

}

void Student :: getData() {

    cout << "Student's Name is " << name << endl;
    cout << "Student's Roll No. is " << rollno << endl;
    cout << "Student's Admission Number is " << admNo << endl;
    cout << "Student's Phone No. is " << phoneNo << endl;
    cout << "Student's email is " << name << endl;

}

int main() {

    Student s1;

    s1.setData(1001, "0517rp.rahul@gmail.com", "6364079215", "Rahul Pandey", 17);
    s1.getData();

    return 0;

}