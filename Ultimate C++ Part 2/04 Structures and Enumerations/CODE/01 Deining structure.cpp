#include <iostream>
// structure means Custom data types
using namespace std;

// we use PascalCase. -> Capitalize each word
struct Movie {
    string title;
    int releaseYear;
};

int main() {
    Movie movie;
    movie.title = "Terminator";
    movie.releaseYear = 1984;

    cout<< "Title: " << movie.title <<endl;
    cout<< "Release Year: " <<movie.releaseYear;

    return 0;
}
