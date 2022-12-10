#include <iostream>
using namespace std;

void greet(string name){

    cout<< "Hello" <<name <<endl;
}

string fullName(string firstName,string lastName){
    //concatenating or combining
    return firstName + " " + lastName;
}

int main(){
    //greet("Mohamed","Ali");
    //string name = fullName("Mohamed"," Ali");
    greet (fullName("Mohamed","Ali"));
    cout << "Done" <<endl;
    return 0;
}