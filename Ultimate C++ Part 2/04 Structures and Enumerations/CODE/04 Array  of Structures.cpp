#include <iostream>
#include <vector>

using namespace std;

struct Movie {
    string title;
    int releaseYear;
    bool isValid;
};

int main() {
    vector<Movie> movies;
    movies.push_back({"Terminator 1",1984});
    movies.push_back({"Terminator 2", 1987});

    for (const auto& movie : movies)
        cout << movie.title << endl;

    return 0;
}
