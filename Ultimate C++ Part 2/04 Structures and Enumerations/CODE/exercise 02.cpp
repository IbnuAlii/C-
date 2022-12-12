#include <iostream>

using namespace std;

struct Address {
    string street;
    string city;
    int zipCode;
};

struct Customer{
    int id = 0;
    string name;
    string email;
    Address address;
};

int main() {
    Customer customer {
        1,
        "Mohamed",
        "ibnuali600@gmail.com",
        {
            "Abagedo Street Jaalle Siyaad Road",
            "Mogadishu",
            252
        }
    };

    cout <<"ID: " <<customer.id <<endl;
    cout <<"Name: " <<customer.name <<endl;
    cout <<"Email: " <<customer.email <<endl;
    cout <<"Address: " <<endl <<"\t" << "Street: "  <<customer.address.street << endl
                              <<"\t" << "City: "  <<customer.address.city << endl
                              <<"\t" << "Zip Code: "  <<customer.address.zipCode << endl;

    return 0;
}