#include <iostream>
using namespace std;
int main() {
    bool isCitizen = true;
    bool caResident = true;
    short tuition = 0;
    // Outer if statement
    if  (isCitizen) {
        // Onner if statement
        if (!caResident) tuition = 1000;
    }
    else tuition = 3000;
    return 0;
}
