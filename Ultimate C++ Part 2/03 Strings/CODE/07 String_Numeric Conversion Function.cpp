#include <iostream>

using namespace std;

int main() {
    // string to number
    string price = "789";
    double num = stod(price) + 1;
    cout << price << endl << num << endl;


    // number to string
    string str = to_string(20.6);
    cout << str;

    return 0;
}
