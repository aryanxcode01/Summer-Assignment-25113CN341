#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 4, 5};
    int n = 5; // numbers are from 1 to 5

    int size = sizeof(arr) / sizeof(arr[0]);

    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;

    for (int i = 0; i < size; i++) {
        actualSum += arr[i];
    }

    int missingNumber = expectedSum - actualSum;

    cout << "Missing number is: " << missingNumber << endl;
    return 0;
}