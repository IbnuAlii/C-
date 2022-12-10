#include <iostream>
using namespace std;
int main() {
    int x= 10;
    int y = 3;
    //double z = x / y;  // warning Solve it
    double z = static_cast<double>(x) / y;  // warning Solve it

    cout<<z;
    return 0;
}