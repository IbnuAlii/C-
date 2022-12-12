#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

int main() {
    double number = 12.34;
    stringstream stream;
    stream << fixed << setprecision(2) <<number;
    string str = stream.str();
    //string str = to_string(number);
    cout << str;

    return 0;
}