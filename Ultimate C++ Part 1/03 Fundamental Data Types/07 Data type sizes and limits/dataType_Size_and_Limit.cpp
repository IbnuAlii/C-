#include <iostream>
#include <limits>

using namespace std;
int main() {
    //
    cout<< sizeof (int) <<" bytes" <<endl;

    cout<< numeric_limits<int>::min() <<endl
        << numeric_limits<int>::max() <<endl;

    //Overflowing: nuqsaan
    int number = numeric_limits<int>::min();
    number ++;
    cout<<number;

    //Underflow:  badasho
    int num = numeric_limits<int>::min();
    number ++;
    cout<<num;
}