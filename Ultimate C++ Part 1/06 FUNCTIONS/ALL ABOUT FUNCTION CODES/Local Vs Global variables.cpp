#include <iostream>
using namespace std;
const double taxRate = .2;
double calculatetax(double sales){
    return sales * taxRate;
}
int main() {
    //local variables (local scope)
    int sales = 10'000;
    double tax = calculatetax(sales);
    return 0;
}