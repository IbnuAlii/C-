#include <iostream>

using namespace std;

int main() {
    string name = "Mohamed Ali";
    // 01) find().
    cout << name.find("M") <<endl;

    if (name.find('F') == -1)
        cout << "Doesn't Exist!" <<endl;

    // 02) reverse -> rfind(). starts the search from the end
    cout << name.rfind('m');

    // 03) find_first_of . returns the first position of the character
    cout << name.find_first_of('m');

    // 04) find_last_of . returns the last position of the character
    cout << name.find_last_of('o');
    return 0;
}
