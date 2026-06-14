#include <iostream>
using namespace std;

int main() {
    int n=6, key=8, count = 0;

    int arr[n]={8,6,8,9,5,8};

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            count++;
        }
    }

    cout << "Frequency of " << key << " is " << count;

    return 0;
}