#include <iostream>
using namespace std;
int main() {
    cout << "Rows: ";
    int rows;
    cin>>rows;
    for (int i = 1; i <= rows; i++) {
        for (int j = 0; j < i; ++j) {
            // i = 1,    j = 0
            // i = 2,    j = 0, 1
            cout << "*";
        }
        cout << "*" << endl;
    }
}