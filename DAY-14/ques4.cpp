#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 2, 4, 5, 1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Duplicate elements are: ";

    for (int i = 0; i < n; i++) {
        bool isDuplicate = false;

        // Check if arr[i] has appeared before
        for (int k = 0; k < i; k++) {
            if (arr[k] == arr[i]) {
                isDuplicate = true;
                break;
            }
        }

        if (isDuplicate)
            continue;

        // Count occurrences
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > 1) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}