#include <iostream>

int main() {
    int x = 10;
    int y = 3;
    int z = x + y;
    // we can also do:
    // 1)  z = x - y;   -> 7
    // 2)  z = x * y;   -> 30
    // 3)  z = x % y;   -> 1
    // 4)  z = x / y;   -> 3

    std::cout << z;
}
    /*

     incrementor
     int x = 10;
     x = x + 5;   -> 15

     int x = 10
     x = x + 1;
     ==> in short we can write x++ instead of x = x + 1;
        _________________________________
        | (x++) or (++x) are different. |
        ---------------------------------

    x++
    ---------- (the current value of 'x' is stored in the variable 'y' , the x is incremented by 1)
        int x = 10;
        int y = x++;
        std::cout << x;
        std::cout << y;
        the result of 'x' will be -> 11;
        the result of 'y' will be -> 10;

    ++x
    ---------- ( 'x' is increased by 1 and then stored in the variable 'z' so both 'x' and 'y' will have the same value)
        int x = 10;
        int y = ++x;
        std::cout << x;
        std::cout << y;
        the result of 'x' will be -> 11;
        the result of 'y' will be -> 11;
     */