#include <iostream>
using namespace std;

void greet(string name){
    cout << "Hello" <<" " <<name <<endl;
}
void greet(string title, string name){
    cout << "Hello" <<" " <<title <<name ;
}

int main() {
    greet("Ali");
    greet("Eng ", "Mohamed");
    return 0;
}