#include <iostream>

using namespace std;

int main() {

    // for loop

    for (int i = 0 ; i < 10 ; i++) {
        cout << i + 1 << " ";
    }
    cout << "\n";

    // while loop

    int num = 0;

    while (num < 10) {
        cout << num + 1 << " ";
        num++;
    }
    cout << "\n";

    // do while

    num = 0;

    do {

        cout << num + 1 << " ";
        num++;

    } while(num < 10);
    cout << "\n";

    // printing a multiplication table using do-while loop

    cout << "\nPrinting a multiplication table\n\n";

    int n;

    cout << "Enter the number : ";
    cin >> n;

    int i = 1;

    do {
        cout << n << " x " << i << " = " << n * i << endl;
        i++;
    }while(i <= 10);
    
    return 0;

}