#include <iostream>
using namespace std;
int main() {
    int arr[] = {64,85,8,6,7,89,79};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int target = 89;

    int low = 0, high = n - 1;
    int index = -1;

    while (low<= high){
        int mid = low +(high - low)/2;
        if (arr[mid] == target){
            index = mid;
            break;
        }
        else if (arr[mid] < target){
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    if (index != -1)
        cout << "Element found at index " << index;
    else
        cout << "Element not found";
    return 0;
}