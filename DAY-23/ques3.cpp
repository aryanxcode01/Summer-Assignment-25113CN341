#include <iostream>
#include <sstream>
using namespace std;
int main(){
    string sentence = "I love competitive programming";
    string word, longest = "";

    stringstream ss(sentence);

    while (ss >> word){
        if (word.length() > longest.length())
            longest = word;
    }
    cout << "Longest Word: " << longest;
    return 0;
}