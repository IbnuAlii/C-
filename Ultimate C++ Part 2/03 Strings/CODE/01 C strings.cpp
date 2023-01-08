#include <iostream>
#include <cstring>

using namespace std;

int main() {
//    // Null terminator (\0)
//    // String literal.
//    char name[8] = "Mohamed";
//    // Character literal
//    name[0]  = 'm';
//    cout<< strlen(name);


    //concatenating.
    char name[4] = "Ali";
    char lastName[] = " Mohamed";

    // Concatenating (combine)
    strcat(name, lastName);
    cout<< name <<endl;

    // to copy one string use 'strcpy'.
    strcpy(name, lastName);
    cout<< name <<endl;

    // to compare two strings we use strcmp.
    if (strcmp(name, lastName) == 0)
        cout << "Equal";
    return 0;
}
