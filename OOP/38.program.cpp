#include <iostream>
#include <cmath>

using namespace std;

class SimpleCalculator {

    protected :

        int num1, num2;

    public :

        void setSimple_1(int);
        void setSimple_2(int);
        void simpleDisplay();

};

class ScientificCalculator {

    protected :

        int num1, num2;

    public :

        void setScientific_1(int);
        void setScientific_2(int);
        void scientificDisplay();

};

void SimpleCalculator :: setSimple_1(int num1) {
    this -> num1 = num1;
}

void SimpleCalculator :: setSimple_2(int num2) {
    this -> num2 = num2;
}

void SimpleCalculator :: simpleDisplay() {

    cout << "Addition : " << num1 + num2 << endl;
    cout << "Subraction : " << num1 - num2 << endl;
    cout << "Multiplication : " << num1 * num2 << endl;
    cout << "Division : " << num1 / num2 << endl;

}

void ScientificCalculator :: setScientific_1(int num1) {
    this -> num1 = num1;
}

void ScientificCalculator :: setScientific_2(int num2) {
    this -> num2 = num2;
}

void ScientificCalculator :: scientificDisplay() {

    cout << num1 << " raised to " << num2 << " is : " << pow(num1, num2) << endl;
    cout << "e raised to " << num1 << " is : " << exp(num1) << endl;
    cout << "e raised to " << num2 << " is : " << exp(num2) << endl;
    cout << "log of " << num1 << " is : " << log(num1) << endl;
    cout << "log of " << num2 << " is : " << log(num2) << endl;

}

class HybridCalculator : public SimpleCalculator, public ScientificCalculator {};

int main() {

    HybridCalculator calc;

    // calc.setScientific_1(4);
    // calc.setScientific_2(3);
    // calc.scientificDisplay();

    calc.setSimple_1(5);
    calc.setSimple_2(4);
    calc.simpleDisplay();

    return 0;

}