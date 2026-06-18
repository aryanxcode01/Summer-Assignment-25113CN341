#include <iostream>
using namespace std;
int main() {
    int arr[] = {64,85,8,6,7,89,79};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n-1; i++){
        for (int j = i + 1; j < n; j++){
            if (arr[i] < arr[j]) {
                swap(arr[i], arr[j]);
            }
        }
    }

    cout << "Array in descending order: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}