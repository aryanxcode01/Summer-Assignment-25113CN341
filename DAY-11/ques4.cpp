#include<iostream>
using namespace std ; 
int factorial(int x){
    int product = 1 ;
    for(int i = 1 ; i<=x ;i++){
        product*=i;
    }
    return product;
}
int  main(){
    int n ;
    cout<<"enter a number :";
    cin>>n;
    
    cout<<"The factorial 0f" <<n<< " is :" << factorial(n) <<endl;
    return 0 ;
}