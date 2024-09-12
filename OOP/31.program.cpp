#include <iostream>

using namespace std;

class BankDeposit {

    int principal, year;
    float interest, finalAmount;

    public :
        BankDeposit();
        BankDeposit(int, int, float);
        BankDeposit(int, int, int);
        void show();

};

BankDeposit :: BankDeposit() {}

BankDeposit :: BankDeposit(int principal, int year, float interest) {
    this -> principal = principal;
    this -> year = year;
    this -> interest = interest;

    finalAmount = principal;

    for (int i = 0 ; i < year ; i++) {
        finalAmount *= (1 + interest);
    }
}

BankDeposit :: BankDeposit(int principal, int year, int interest) {
    this -> principal = principal;
    this -> year = year;
    this -> interest = static_cast<float>(interest) / 100.0f;

    finalAmount = principal;

    for (int i = 0 ; i < year ; i++) {
        finalAmount *= (1 + this->interest);
    }
}

void BankDeposit :: show() {
    cout << "Initial amount was " << principal << endl;
    cout << "Final amount after " << year << " years is " << finalAmount << endl;
}


int main() {

    // dynamic initialization of objects

    BankDeposit amount_1, amount_2;

    int principal, year;
    float interest;

    cout << "Enter the principal amount : ";
    cin >> principal; 
    cout << "Enter the duration : ";
    cin >> year; 
    cout << "Enter the interest rate : ";
    cin >> interest;

    if (interest == static_cast<int>(interest)) {
        amount_1 = BankDeposit(principal, year, static_cast<int>(interest));
    }
    else {
        amount_1 = BankDeposit(principal, year, interest);
    }

    amount_1.show();
     

    return 0;

}