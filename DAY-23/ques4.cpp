#include <iostream>
#include <unordered_set>
using namespace std;
int main() {
    string str = "programming";
    string result = "";
    unordered_set<char> seen;

    for (char ch : str) {
        if (seen.find(ch) == seen.end()) {
            result += ch;
            seen.insert(ch);
        }
    }
    cout << "After removing duplicates: " << result;
    return 0;
}