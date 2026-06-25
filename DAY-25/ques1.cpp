#include <iostream>
using namespace std;

int main() {
    int a[] = {1, 3, 5, 7};
    int b[] = {2, 4, 6, 8};

    int n = 4, m = 4;
    int c[n + m];

    int i = 0, j = 0, k = 0;

    while (i < n && j < m) {
        if (a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    while (i < n)
        c[k++] = a[i++];

    while (j < m)
        c[k++] = b[j++];

    cout << "Merged Array: ";
    for (int x = 0; x < n + m; x++)
        cout << c[x] << " ";

    return 0;
}