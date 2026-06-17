#include <iostream>
using namespace std;
int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {2, 4, 6, 8};

    int n1 = 5, n2 = 4;

    cout << "Common Elements: ";

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                break;
            }
        }
    }
    return 0;
}