#include <iostream>
using namespace std;
int main() {
    bool isCitizen= true;
    bool hasBachelorDegree= false;
    short yearsOfExperience = 3;
    bool isEligible = isCitizen && (hasBachelorDegree || yearsOfExperience >=2);

    cout << boolalpha <<isEligible;
    return 0;
}
