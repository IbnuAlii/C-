#include <iostream>
#include <vector>

using namespace std;

struct Date{
    short year = 1900;
    short month = 1;
    short day = 1;
};

struct Movie {
    string title;
    Date releaseDate;
    bool isValid;
};

int main() {
    Date date {1984,6,1};
    Movie movie {"Terminator",date};

    cout << movie.releaseDate.year << endl;
    cout << movie.releaseDate.month <<endl;
    cout << movie.releaseDate.day;
    return 0;
}
