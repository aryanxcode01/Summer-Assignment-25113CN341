#include<iostream>
using namespace std;
bool ispalindrome(int x){
    int temp = x;
    int rev = 0;
    while(x>0){
        int ld = x%10;
        rev=(rev*10)+ld;
        x/=10;
    }
    return temp == rev;
}
int main(){
    int n ;
    cout<<"enter number:";
    cin>>n;
    bool ans = ispalindrome(n);
    if(ans==true) cout << n << " is a palindrome number ";
    else cout << n << " is not a palindrome number ";
    return 0 ;
}