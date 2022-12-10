#include <iostream>
using namespace std;
int main() {
    int temperatures[]={60,80,90};
    double sum =0;
    for (int temperature:temperatures)
        sum = sum + temperature;
    short count = sizeof (temperatures)/ sizeof(int);
    double average = sum / count;
    cout << average;
    return 0;
}