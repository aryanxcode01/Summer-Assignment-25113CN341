#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    string str="ARYAN IS A GOOD BOY";

    unordered_map<char, int> freq;

    for (char ch : str) {
        freq[ch]++;
    }

    for (char ch : str){
        if (freq[ch] == 1){
            cout << "First non-repeating character: " << ch << endl;
            return 0;