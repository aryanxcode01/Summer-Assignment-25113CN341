#include<iostream>
using namespace std ;
int main(){
    int n ;                                      // n-> binary  number 
    cout << "enter binary number : " ;
    cin>>n;
    int ans = 0 , pow = 1 ;
    while(n>0){
        int rem = n %10 ;
        ans += rem*pow ;
        n/=10 ;
        pow*=2;
    }
    cout << "decimal number is : " << ans << endl;
    return 0 ;
}