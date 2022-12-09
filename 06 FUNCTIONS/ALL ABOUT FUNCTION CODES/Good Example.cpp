#include <iostream>
using namespace std;

void greet(string& name){
    cout<< "Hello" << name <<endl;

}
int main() {
    string name = "Mohamed";
    greet(name);
    cout << name;
    return 0;
}