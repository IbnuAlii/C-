#include <iostream>

using namespace std;

int main() {
    // Program soo saaraya last name
    string name = "Mohamed Alinor Adam";
    auto index = name.rfind(' ');
    string firstName = name.substr(0,index);
    string lastName= name.substr(index + 1);
    cout << "First Name is: " <<"(" << firstName <<")" <<endl;
    cout << "Last Name is: " <<"(" << lastName <<")";
    return 0;
}
