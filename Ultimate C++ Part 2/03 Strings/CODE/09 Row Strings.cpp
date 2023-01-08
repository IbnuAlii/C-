#include <iostream>

using namespace std;

int main() {
    // this is hard to understand
    string str = "\"c:\\folderA\\folderB\\file.txt\"";

    //simply we do: R -> short for row
    string str1 = R"("c:\folderA\folderB\file.txt")";
    // this is the benefit of rwo string
    cout <<str1;
    return 0;
}
