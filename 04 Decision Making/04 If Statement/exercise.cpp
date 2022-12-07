#include <iostream>
using namespace std;
int main() {
    int sales = 50'000;
    double commission;
    if (sales <= 10'000)
        commission = .1;
    else if(sales <= 15'000)
        commission = .15;
    else
        commission = .2;

    cout << commission;


    return 0;
}
