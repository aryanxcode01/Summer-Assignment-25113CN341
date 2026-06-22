#include <iostream>
#include <string>
using namespace std;
int main() {
    string str = "NAYAN";

    int left = 0;
    int right = str.length() - 1;
    bool palindrome = true;

    while (left < right) {
        if (str[left] != str[right]) {
            palindrome = false;
            break;
        }
        left++;
        right--;
    }

    if (palindrome)
        cout << "It is a Palindrome String";
    else
        cout << "It is not a Palindrome String";

    return 0;
}