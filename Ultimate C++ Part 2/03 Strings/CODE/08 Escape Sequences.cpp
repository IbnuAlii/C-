#include <iostream>

using namespace std;

int main() {
    // we use two backslashes to have an escape sequence
    string str = "c:\\my folder" ;
    cout << str <<endl;

    // wrap (the Hello Word) with double quotation marks.
    string str1 =  "\"Hello World\"";
    cout << str1 <<endl;

    // wrap (the Hello Word) with single quotation marks.
    string str2 =  "'Hello World'";
    cout << str2 <<endl;

    // new line (\n)
    string str3 =  "Hello\nWorld";
    cout << str3 <<endl;

    // tap space (\t)
    string str4 =  "Hello\tWorld";
    cout << str4;
    return 0;
}
