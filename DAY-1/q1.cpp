#include <iostream>
using namespace std;

int main() {
    int sum = 0 ;
    int n ;
    // this will take user input
    cout <<"enter n :" ; 
    cin >>n ;
    for(int i = 0 ; i<= n ; i++){
        sum+=i;
    }
    cout <<"sum of n natural number is :" << sum << endl;
    return 0;
}