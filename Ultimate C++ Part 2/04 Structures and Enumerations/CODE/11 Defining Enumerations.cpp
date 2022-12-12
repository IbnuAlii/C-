#include <iostream>

#include <vector>

using namespace std;

enum Action{
    List = 1,
    Add,
    Update
};

int main() {

    cout <<
        "1: List invoices" <<endl <<
        "2: Add invoices" <<endl <<
        "1: Update invoices" <<endl <<
        "Select: ";

    int input;
    cin >> input;

    if (input == Action::List){
        cout << "List invoices" <<endl;
    }

    int input2;
    cin >> input2;

    if (input2 == Action::Add){
        cout << "Add invoices" <<endl;
    }

    int input3;
    cin >> input3;

    if (input3 == Action::Update){
        cout << "Update invoices";
    }

    return 0;
}
