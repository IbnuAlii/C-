#include <iostream>

using namespace std;

int main() {
    // stack
    // int numbers[1000];

    // Heap (Free Store)
    int* numbers = new int[10];

    // to deallocate memory we use 'delete Operator'
    delete[] numbers;
    return 0;
}
