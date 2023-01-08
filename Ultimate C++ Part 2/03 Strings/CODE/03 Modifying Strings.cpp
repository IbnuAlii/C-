#include <iostream>

using namespace std;

int main() {
    string name = "Mohamed";
    // 01) append(): adds to the last
    name.append(" Ali");
    cout << name;
    // Mohamed Ali

    // 02) insert(index , what you want to insert): adds to a specific index you select.
    name.insert(0, "I am ");
    cout << name;
    // I am Mohamed

    // 03) erase(index, number of characters to remove): removes a specific index you select.
    name.erase(0, 2);   // position 0 and remove two characters
    cout << name;
    //

    // 04) Clear(): its same as (name = ""); , when you print it you don't see anything.
    name.clear();
    cout << name;

    // 05) Replace(index, number of characters to replace, value to replace with): replaces an old string to a new string .
    name.replace(0, 2,"MO");
    cout << name;
    return 0;
}
