#include <iostream>
using namespace std;
int max(int first, int second){
//    if (first >second)
//        return first;
//    else
//        return second;
    //or

    return (first > second)? first:second;

}
int main() {
    int larger = max(456,87);
    cout << larger << " " <<"is the largest number"  <<endl;
    return 0;
}