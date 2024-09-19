#include <iostream>

using namespace std;

// virtual base class

class Student {

    protected :

        string name;
        int rollNo;

    public :

        void setDetails(string, int);
        void printDetails();

};

class Test : virtual public Student {

    protected :

        float maths, physics;

    public :

        void setMarks(float, float);
        void printMarks();

};

class Sports : virtual public Student {

    protected :
    
        float score;

    public :

        void setScore(float);
        void viewScore();

};

class Result : public Test, public Sports {

    float totalMarks;

    public :

        void displayTotal();

};

void Student :: setDetails(string name, int rollNo) {
    this -> name = name;
    this -> rollNo = rollNo;
}

void Student :: printDetails() {

    cout << "Name : " << name << endl;
    cout << "Roll No. : " << rollNo << endl;

}

void Test :: setMarks(float maths, float physics) {
    this -> maths = maths;
    this -> physics = physics;
}

void Test :: printMarks() {

    cout << "Marks obtained in Mathematics : " << maths << endl;
    cout << "Marks obtained in Physics : " << physics << endl;

}

void Sports :: setScore(float score) {
    this -> score = score;
}

void Sports :: viewScore() {
    cout << name << " pt score is " << score << endl;
}

void Result :: displayTotal() {

    setDetails("Rahul Pandey", 17);
    setMarks(96.54, 98.65);
    setScore(98.66);

    totalMarks = maths + physics + score;

    printDetails();
    printMarks();
    viewScore();

    cout << "The total marks obtained by " << name << " is " << totalMarks << " out of 300" << endl;

}

int main() {

    Result rahul;
    rahul.displayTotal();

    return 0;

}