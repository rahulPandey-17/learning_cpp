#include <iostream>
#include <string>

using namespace std;

class Binary {

    string s;

    public :
        void read();
        void chk_bin();
        void onec();

};

void Binary :: read() {
    cout << "Enter the binary : ";
    cin >> s;
}

void Binary :: chk_bin() {
    for (int i = 0 ; i < s.length() ; i++) {
        if (s.at(i) != '0' && s.at(i) != '1') {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void Binary :: onec() {

    // nesting of member functions

    read();
    chk_bin();
    
    for (int i = 0 ; i < s.length() ; i++) {

        if (s.at(i) == '0') {
            s.at(i) = '1';
        }
        else {
            s.at(i) = '0';
        }

    }

    cout << "One's compliment of the string is " << s << endl;

}

int main() {

    Binary number;
    number.onec();

    return 0;

}