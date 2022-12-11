#include <iostream>

using namespace std;

/* passing by referencing
void increasePrice (double& price){
     price *= 1.2;
}

 */

// passing pointer
void increasePrice (double* price){
    *price *= 1.2;
}

/* passing by referencing
int main() {
    double price = 100;
    increasePrice(price);
    cout << price;
    return 0;
};

*/

// passing pointer
int main() {
    double price = 100;
    increasePrice(&price);
    cout << price;
    return 0;
}
