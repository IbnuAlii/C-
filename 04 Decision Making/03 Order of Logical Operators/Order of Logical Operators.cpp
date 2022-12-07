#include <iostream>
using namespace std;
int main() {
   // ()    -> change order
   // !     -> priority 1
   // &&    -> priority 2
   // ||    -> priority 3
   bool a = true;
   bool b = false;
   bool c = false;
//   bool result = b && !a;
//    cout <<boolalpha <<result;
    // -> true

//    bool result = a || b && c;
//    cout <<boolalpha <<result;
    // -> true
    bool result = (a || b) && c;
    cout <<boolalpha <<result;
    // -> false
    return 0;
}
