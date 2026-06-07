#include<iostream>
using namespace std ;

int sum(int x ){
    if(x==0) return x ;

    return (x%10)+sum(x/=10);
}

int main(){
    int n ; 
    cout << "enter  number :";
    cin>>n;

    cout<<"The sum  of digits of "<< n << " is : "<< sum(n) << endl;
    return 0 ;
}