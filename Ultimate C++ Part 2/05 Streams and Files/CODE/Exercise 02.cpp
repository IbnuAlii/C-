#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

string to_string (double number, int precision){
    stringstream stream;
    stream << fixed << setprecision(2) <<number;
    return stream.str();
}

int main() {
    double number = 12.34;
    //string str = to_string(number);
    cout << to_string(number,2);

    return 0;
}