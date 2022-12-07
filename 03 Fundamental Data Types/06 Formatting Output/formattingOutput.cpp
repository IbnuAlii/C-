#include <iostream>
#include <iomanip>
    //Manipulation
using namespace std;
//format data in columns
int main() {
    cout<<left;
    cout <<setw(10) <<"Spring" << setw(10) <<"Nice" <<endl
         << setw(10) <<"Summer" << setw(10) <<"Hor";
    return 0;
}