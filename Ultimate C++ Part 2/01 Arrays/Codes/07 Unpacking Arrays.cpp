#include <iostream>
using namespace std;
int main() {
    int vales[3]={10,20,30};
    //unpacking arrays
    auto[x,y,z] = vales;
    cout<<x <<", " <<y <<", " <<z ;

    return 0;
}
