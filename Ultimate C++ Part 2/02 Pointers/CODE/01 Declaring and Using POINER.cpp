#include <iostream>

using namespace std;

int main() {
    int number=10;
    //cout<< &number;

    // THE AAddress of the operator
    int* ptr = &number;
    // interaction or de-referencing operator
    *ptr = 20;
    cout <<  number;
    return 0;
}
