#include <iostream>

using namespace std;

class Student {

    protected :

        int rollno;

    public :

    void setRoll(int);
    int getRollno();

};

class Exam : public Student {

    protected :

        float maths;
        float physics;

    public :

        void setMaths(float);
        void setPhysics(float);
        float getPhysics();
        float getMaths();
        void showMarks();

};

class Result : public Exam {

    float percentage;

    public :

        void displayResult();

};

void Exam :: setMaths(float maths) {
    this -> maths = maths;
}

void Exam :: setPhysics(float physics) {
    this -> physics = physics;
}

float Exam :: getMaths() {
    return maths;
}

float Exam :: getPhysics() {
    return physics;
}

void Exam :: showMarks() {
    cout << "Marks obtained in maths is " << getMaths() << endl;
    cout << "Marks obtained in physics is " << getPhysics() << endl;
}

void Result :: displayResult() {
    cout << "Student's roll no. is " << getRollno() << endl;
    cout << "Student's marks in maths is " << getMaths() << endl;
    cout << "Student's marks in physics is " << getPhysics() << endl;
    cout << "Your percentage is " << ((getMaths() + getPhysics()) / 2) << "%" << endl;
}

void Student :: setRoll(int rollno) {
    this -> rollno = rollno;
}

int Student :: getRollno() {
    return rollno;
}

int main() {

    Result rahul;
    rahul.setRoll(17);
    rahul.setMaths(92);
    rahul.setPhysics(98);
    rahul.displayResult();

    return 0;

}