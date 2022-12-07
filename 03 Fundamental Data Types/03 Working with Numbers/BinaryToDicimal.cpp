#include <iostream>
using namespace std;
int main() {
    /*
     * Decimal numbers  0-9.
     * Binary Numbers   9,1.
     * Hexadecimal      0-9, A-F.
     *
     * decimal to binary
     * 255 = 11111111
     * decimal to Hexadecimal
     * 255 = ff
     */
    // to get decimal values as binary start with '0b'
    int number = 0b11111111;
    // to get decimal values as Hexadecimal start with '0x'
    int num = 0xff;
    cout<<"Binary to Decimal : " <<number <<endl;
    cout<<"Hexadecimal to Binary : " <<num;
}