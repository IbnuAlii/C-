#include <iostream>

    // () we can always change the order of these operators using parenthesis.
    // -> x = 1 + 2 * 3;      =7
    // -> x = (1 + 2) * 3;    =9
    // '*' and '/' operators always have a higher priority than
    // '+' and '-' operators

int main() {
    double x = 10;
    double y = 5;
    double z = (x+10)/ (3*y);
    std::cout << z;
    return 0;
}