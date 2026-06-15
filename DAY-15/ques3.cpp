#include <iostream>
#include <algorithm>
using namespace std;

void leftRotate(int arr[], int n, int k) {
    k = k % n;

    reverse(arr, arr + k);      // Reverse first k elements
    reverse(arr + k, arr + n);  // Reverse remaining elements
    reverse(arr, arr + n);      // Reverse whole array
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int k = 2;

    leftRotate(arr, n, k);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}