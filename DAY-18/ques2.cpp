#include <iostream>
using namespace std;
int main() {
    int arr[] = {64,85,8,6,7,89,79};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    for (int i = 0; i < n - 1; i++){
        int minIndex = i;

        for (int j = i + 1; j < n; j++){
            if (arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}