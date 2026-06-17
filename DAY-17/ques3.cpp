#include <iostream>
#include <set>
using namespace std;
int main() {
    int arr1[] = {1, 2, 2, 3, 4, 5};
    int arr2[] = {2, 2, 3, 5, 6};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    set<int> s1, intersection;

    for (int i = 0; i < n1; i++) {
        s1.insert(arr1[i]);
    }

    for (int i = 0; i < n2; i++) {
        if (s1.find(arr2[i]) != s1.end()) {
            intersection.insert(arr2[i]);
        }
    }

    cout << "Intersection: ";
    for (int x : intersection) {
        cout << x << " ";
    }
    return 0;
}