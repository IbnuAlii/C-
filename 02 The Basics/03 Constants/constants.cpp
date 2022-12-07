#include <iostream>

int main() {
    const double pi = 3.14;  // constant -> means values cannot be changed.
    pi = 0; // Error
    // const -> prevents the value to accidentally change.
    std::cout << pi;
}