#include <iostream>

using namespace std;

struct Movie{
    string title;
    int releaseYear;
    bool isPopular;
};

int main() {
    Movie movie = {"Terminator",1984,false};
    //Unpacking
    auto [title, releaseYear, isPopular] {movie};
    cout << releaseYear;
    return 0;
}
