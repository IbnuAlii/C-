#include <iostream>
using namespace std;
int main() {
    cout << "Enter two values: ";
    int first;
    int second;
    cin >> first >> second;

    int result = (first > second) ? first : second;

    cout << result ;

    return 0;
}