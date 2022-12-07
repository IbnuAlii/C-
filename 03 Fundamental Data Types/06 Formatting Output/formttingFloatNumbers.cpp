#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    cout<< fixed << 12.34657 <<endl;
    // fixed returns 6 digits after floating point
    cout <<"floating poont-ka waa la xadiday" <<endl;
    cout<< fixed <<setprecision(10) << 12.34657;
    return 0;
}