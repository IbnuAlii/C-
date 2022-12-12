#include <iostream>

using namespace std;

enum class Action{
    List = 1,
    Add,
    Update
};

enum class Operation {
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

    if (input == static_cast<int>(Action::List)){
        cout << "List invoices" <<endl;
    }

    int input2;
    cin >> input2;

    if (input2 == static_cast<int>(Action::Add)){
        cout << "Add invoices" <<endl;
    }

    int input3;
    cin >> input3;

    if (input3 == static_cast<int>(Action::Update)){
        cout << "Update invoices";
    }

    return 0;
}
