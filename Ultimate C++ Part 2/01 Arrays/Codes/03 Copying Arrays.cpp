#include <iostream>
using namespace std;
int main() {

    /* in C++ we can not assign one arrays to another one
    int first[]={10,20,30};
    int second[]= first;
    */

    /*
     if you want to copy an array, we have to loop over it and copy each element separately;
     so that we use traditional for loop because we want to copy each element at given position to the
     second array at the same position.
     */
    // let's do it.

    int first[]={10,20,30};
    int second[size(first)];

    for (int i = 0; i < size(first); ++i) {
        // copy the first array to the second array.
        second[i]=first[i];
    }

    // iterate over the second array using range based for loop.
    for(int number: second)
        cout<<number <<endl;

    return 0;
}
