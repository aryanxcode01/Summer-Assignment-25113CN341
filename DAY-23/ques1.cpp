#include <iostream>
using namespace std;
bool isRotation(string s1, string s2){
    if (s1.length() != s2.length())
        return false;

    string temp = s1 + s1;
    return temp.find(s2) != string::npos;
}

int main() {
    string s1 = "ABCD";
    string s2 = "CDAB";

    if (isRotation(s1, s2))
        cout << "Strings are rotations";
    else
        cout << "Strings are not rotations";

    return 0;
}