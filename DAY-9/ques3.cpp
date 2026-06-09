#include <iostream>
using namespace std;
int main() {
    for(char ch = 'A'; ch <= 'E'; ch++){
        for(int j = 1; j <= (ch-'A'+1); j++){
            cout <<ch;
        }
        cout <<endl;
    }
    return 0;
}