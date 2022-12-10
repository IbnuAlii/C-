#include <iostream>
using namespace std;
double calculateTax (double income, double taxRate = .2){
    //Note:
    //parameters with default value should always come after parameters without default vale

    return income * taxRate;
}
int main() {
    calculateTax(10'000);
    double tax = calculateTax(10'000);
    cout <<tax <<endl;
    return 0;
}