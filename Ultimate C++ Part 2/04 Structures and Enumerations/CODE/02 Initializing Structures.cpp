#include <iostream>

using namespace std;

struct Movie{
    string title;
    int releaseYear;
    bool isPopular;
};

int main() {
    Movie movie = {"Terminator", 1984};
    cout << movie.title <<endl  <<movie.releaseYear;
    return 0;
}
