#include <iostream>

using namespace std;

int main() {
    int numbers[]= {10,20,30};
    int* ptr = numbers;
    //100 - 103
    //sizeof(data in memory)
    ptr++;
    cout<< *ptr <<endl;
    ptr --;
    cout << *ptr;

    /* these three statements are identical
     * the all return the same value.*/
    cout<< *(ptr +1);
    cout << ptr[1];
    cout << numbers[1];
    return 0;
}
