#include <iostream>

using namespace std;

void printNumbers(int numbers[]){
    numbers[0] = 0;
}

int main() {
    int numbers[] = {10,20,30};
    //int* prt = numbers;
    //cout<< *prt;
    printNumbers(numbers);
    cout<< numbers[0];
    return 0;
}
