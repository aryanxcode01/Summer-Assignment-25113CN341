#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "hello everyone i am your group leader";
    string result="";

    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ')
            result += str[i];
    }
    cout << "String after removing spaces: " << result;
    return 0;
}