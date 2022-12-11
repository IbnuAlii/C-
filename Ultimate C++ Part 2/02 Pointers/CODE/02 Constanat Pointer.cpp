#include <iostream>

using namespace std;

int main() {

    const int x = 10;
    const int* const ptr = &x;
    // we have a constant pointer pointing to a constant integer.

    return 0;
}
