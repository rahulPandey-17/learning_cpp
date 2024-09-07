#include <iostream>

using namespace std;

int main() {

    // break

    for (int i = 1 ; i <= 10 ; i++) {
        if (i == 6) {
            break;
        }
        cout << i << " ";
    }
    cout << "\n";

    // using continue for printing the multiples of 2 b/w 1 and 10

    for (int i = 1 ; i <= 10 ; i++) {
        if (i % 2 != 0) {
            continue;
        }
        cout << i << " ";
    }
    cout << endl;

    return 0;

}