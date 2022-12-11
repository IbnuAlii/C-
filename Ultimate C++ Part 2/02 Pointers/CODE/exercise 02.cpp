#include <iostream>

using namespace std;

void swap (int* first, int* second){
    int temp = *first;
    *first = *second;
    *second = temp;
}

int main() {
    int x = 10;
    int y = 20;
    swap(&x, &y);

    cout << x <<", " <<y <<endl;
    return 0;
}
