#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout << "enter n :";
    cin>>n;
    int product =1 ;
    while(n!=0){
        int ld = n%10;
        product*=ld;
        n/=10;
    }
    cout << "the product of all digit of n is ->" << product<<endl;
    return 0 ;
}