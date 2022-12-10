#include <iostream>
using namespace std;

void sort(int numbers[], int size){
    for (int pass = 0; pass < size; pass ++) {
        for (int i = 1; i < size; ++i) {
            if (numbers[i] < numbers[i - 1]){
                int temp = numbers[i];
                numbers[i] = numbers[i - 1];
                numbers[i - 1] = temp;
            }
        }

    }
}

int main() {
    int numbers[]={30,20,10};
    sort(numbers, size(numbers));
    for (int number: numbers)
        cout<< number <<endl;
    return 0;
}
