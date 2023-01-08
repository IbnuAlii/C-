#include <iostream>
#include <string>
using namespace std;

int main() {
    string name = "Mohamed";
    string another  = "Ali";
//    if (name < another)
//        cout << "Same";
//    // usifull functions
//    // 01) starts_with().
//    cout << name.starts_with("M");
//    //returns 1 if it's True , otherwise 0.
//
//    // 02) ends_with()
//    cout << name.ends_with("M");
//    //returns 1 if it's True , otherwise 0.

    // 03) empty();
    cout<<name.empty() <<endl;
    //returns 1 if it's True , otherwise 0.

    // 04) front().  returns the first character in the string.
    cout << name.front() << endl;

    // 05) back().  returns the last character in the string.
    cout << name.back();
    return 0;
}
