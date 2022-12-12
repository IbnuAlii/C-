#include <iostream>

/*
 Given the following format for customer numbers:
 2 alphabetic characters
 4 digits
 write a function to validate a customer number.
 bool isValid (string customerNumber);
*/

using namespace std;

bool isValid(string customerNumber){
    if (customerNumber.length() != 6)
        return false;

    for (int i = 0; i < 2; i++)
        if (!isalpha(customerNumber[i]))
            return false;

    for (int i = 2; i < customerNumber.length(); i++)
        if (!isdigit(customerNumber[i]))
            return false;

    return true;
}
int main() {

    string customerNumber = "AB1234";
    cout << isValid(customerNumber);

    return 0;
}
