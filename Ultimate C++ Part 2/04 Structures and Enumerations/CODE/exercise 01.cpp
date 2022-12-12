#include <iostream>

using namespace std;

struct Customer {
    int id ;
    string name;
    string email;
};

int main() {
    Customer customer;
    cout<< "ID: ";
    cin >> customer.id;

    cout<< "Name: ";
    cin >> customer.name;

    cout<< "Email: ";
    cin >> customer.email;

    cout << "ID: " <<customer.id <<endl;
    cout << "Name: " <<customer.name <<endl;
    cout << "Email: " <<customer.email;

    return 0;
}
