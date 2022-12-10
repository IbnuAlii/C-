#include <iostream>
using namespace std;
int main() {
    int tempereture = 100;
    if (tempereture <60){
        cout << "Cold" <<endl;
    }
    else if (tempereture <90){
        cout << "Nice";
    }
    else {
        cout << "Hot";
    }
    return 0;
}
