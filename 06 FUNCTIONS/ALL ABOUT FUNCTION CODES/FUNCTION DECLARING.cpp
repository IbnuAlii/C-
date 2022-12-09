#include <iostream>
using namespace std;

// we can not declare our function after main function, but we can define it after main function;
// in simple words;
//declare function before the main function;
// and define it after the main function.

//Function declaration (Function prototype)
void greet(string name);

int main() {
    greet("Mohamed");
    return 0;
}

//function definition
void greet(string name){
    cout<< "Hello " <<name;
}