#include<iostream>
using namespace std;
int fibonacci(int n){
    if(n==0 || n==1) return n ;
    int a = 0 , b =1 ;
    for(int i =2 ; i<= n ; i++){
        int c= a+b;
        a=b ; 
        b=c;
    }
    return b ;
}
int main(){
    int n ; 
    cout<<"enter number:";
    cin>>n;
    
    cout<< "Fibonacci at position " << n << " is " << fibonacci(n) <<endl;
    return 0 ;
}