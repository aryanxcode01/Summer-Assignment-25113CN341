#include<iostream>
using namespace std ;
int main(){
    int decnum;
    cout << "enter decimal number :";
    cin>>decnum;
    int ans = 0 , pow = 1 ;
    while(decnum > 0 ){
        int rem = decnum%2;
        decnum/=2 ;
        ans+=rem*pow;
        pow*=10;
    }
    cout<< "binary number is : " << ans << endl;
    return 0 ;
}