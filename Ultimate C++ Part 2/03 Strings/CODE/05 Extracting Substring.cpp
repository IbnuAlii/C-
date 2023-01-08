#include <iostream>

using namespace std;

int main() {
    string name = "Mohamed Ali";
    // independent copy
    string copy = name.substr(8);
    cout << copy << endl;

    // specifying number of characters to extract
    // substr(starting index , number of characters to extract)
    string copy1 = name.substr(8,3);
    cout << copy1;

    return 0;
}
