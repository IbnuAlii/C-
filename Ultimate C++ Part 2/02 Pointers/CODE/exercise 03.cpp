#include <iostream>

using namespace std;

int main() {
    /* Given this array:
     * int numbers[]= {10, 20, 30};

     create a pointer that points to the last element in this array.
     use a while loop to iterate over this array, and print the numbers in reverse Order.

     */

    int numbers[]={10,20,30};
    int* ptr  = &numbers[size(numbers) - 1];
    while (ptr >= numbers) {
        cout<< *ptr << endl;
        ptr--;
    }
    return 0;
}
