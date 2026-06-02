#include<iostream>
using namespace std ;
int main(){
    int n ,reverse = 0;
    cout << "enter  n :";
    cin>>n;
    int temp = n ;
    while(n!=0){
        int ld = n%10;
        reverse = (reverse*10)+ ld;
        n/=10;
    }
    if(reverse==temp) cout << temp << " is a palindrome number";
    else cout << temp << " is not a palindrome number";
    return 0 ;
}