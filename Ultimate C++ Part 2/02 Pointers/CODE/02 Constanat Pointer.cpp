#include <iostream>

using namespace std;

int main() {
//
//    //1) Data is constant
//    // in ths scenario the data is constant but the pointer is not
//    const int a = 10;
//    const int* ptr = &a;
//    int y = 20;

//        *ptr = 30 //-> data is constant so we cannot update it

//    // pointer is not constant.
//    ptr = &y;


//    //2) Pointer is constant
//    // in ths scenario the pointer is constant but the data is not
//    int a = 10;
//    int* const ptr = &a;
//    int y = 20;
//
//    a= 20; //-> data is not constant
//
//    // pointer is not constant.
//    ptr = &y;

    //3) Pointer is constant
    // in ths scenario both the pointer and data are constant
    const int x = 10;
    const int* const ptr = &x;
    // we have a constant pointer pointing to a constant integer.


    int y= 20;
    ptr = &y; // pointer is constant you cannot update it .
    x= 20; //-> data is not constant you cannot update it .



    return 0;
}
