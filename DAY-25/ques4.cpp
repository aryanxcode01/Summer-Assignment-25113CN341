#include <iostream>
using namespace std;

int main() {
    string words[] = {"apple", "cat", "elephant", "dog", "banana"};
    int n = 5;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (words[i].length() > words[j].length()) {
                string temp = words[i];
                words[i] = words[j];
                words[j] = temp;
            }
        }
    }

    cout << "Words Sorted by Length:\n";
    for (int i = 0; i < n; i++){ 
        cout << words[i] << endl;
    }
    return 0;
}