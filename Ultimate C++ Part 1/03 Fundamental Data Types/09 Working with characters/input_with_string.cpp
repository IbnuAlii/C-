#include <iostream>
using namespace std;
int main() {
    string name ;
    cout<<"Enter your Name: ";
    //cin>> name;
    //wixi space ka dambeya waa la egnore garaynaa sidaa datreed si aan u helno mid dhamaan noo soo daabaca we use:
    getline(cin,name);
    cout<< "Hi " <<name;
    return 0;
}