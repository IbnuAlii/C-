#include <iostream>
using namespace std;
int main() {
    for (int i=0; i<=5 ; i++) {
        if (i % 3 == 0)
            continue;
        cout << i << endl;
    }

    while (true) {
        cout << "Number: ";
        int number;
        cin >> number;
        if (number >=1 && number <=5)
            break;
        cout << "Error! Enter a number between 1 and 5." <<endl;
    }
    return 0;
}