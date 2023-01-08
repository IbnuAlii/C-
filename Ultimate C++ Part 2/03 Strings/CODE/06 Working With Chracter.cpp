#include <iostream>

using namespace std;

int main() {
    string name = "Mohamed Alinor";
    // 01) islower(): returns 1 which means (True) if the given  character is lowercase otherwise returns 0
    cout<< islower(name[0]) <<endl;

    // 02) isupper(): returns 1 which means (True) if the given  character is Uppercase otherwise returns 0.
    cout<< isupper(name[0]) <<endl;

    // 03) isalpha(): returns 1 which means (True) if the given  character is alphabetic otherwise returns 0.
    cout<< isalpha(name[0]) <<endl;

    // 04) isdigit(): returns 1 which means (True) if the given  character is digit otherwise returns 0.
    cout<< isdigit(name[0]) <<endl;

    // 05) isspace(): returns 1 which means (True) if we have a white space otherwise returns 0.
    cout<< isspace(name[0]) <<endl;

    // 06) toupper : converts the lowercase character into uppercase.
    cout << (char) toupper('a') <<endl;

    // 07) toupper : converts the lowercase character into uppercase.
    cout << (char) tolower('A');
    return 0;
}
