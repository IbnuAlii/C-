#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    cout<<left <<setw(15) << "Course" <<setw(15) << "Student" <<endl
        <<setw(15) <<"C++" <<setw(15)  <<100 <<left <<endl
        <<setw(15) <<"JavaScript" <<setw(15)  <<50 <<left <<endl;
}