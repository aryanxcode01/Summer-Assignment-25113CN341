#include <iostream>
#include <string>
using namespace std;
int main(){
    string str = "I LOVE C++ PROGRAMMING";

    int words = 0;

    for (int i = 0; i < str.length(); i++){
        if (str[i] == ' ')
            words++;
    }
    cout << "Number of words = " << words + 1;
    return 0;
}