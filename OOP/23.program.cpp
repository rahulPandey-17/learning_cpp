#include <iostream>

using namespace std;

class Student {

    string section;
    int rollno;

    public :
        void setDetails();
        void getDetails();

};

void Student :: setDetails() {
    section = "A";
    cout << "Enter the student's roll no. : ";
    cin >> rollno;
}

void Student :: getDetails() {
    cout << "Section : " << section << endl;
    cout << "Roll no. : " << rollno << endl;
}

int main() {

    Student s[4];

    for (int i = 0 ; i < 4 ; i++) {
        s[i].setDetails();
        s[i].getDetails();
    }

    return 0;

}