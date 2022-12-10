#include <iostream>
using namespace std;
int main() {

    int numbers[]={1,2,3,4,5};
//    for (int i = 0; i < sizeof(numbers)/ sizeof(int); ++i) {
//        cout<< numbers[i] <<endl;


    //or simply we can do:
//    for (int number : numbers){
//        cout << number <<endl;
//    }
    
    // the best way is to do:
    for (int i = 0; i < size(numbers); ++i) {
        cout<< numbers[i] <<endl;
    }

    return 0;
}
