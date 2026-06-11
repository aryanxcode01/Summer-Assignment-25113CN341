#include<iostream>
using namespace std ; 
int add(int a , int b){
    return a+b;
}
int  main(){
    int a ;
    cout<<"enter a :";
    cin>>a ;
    int b ; 
    cout<<"enter b : ";
    cin>>b;
    
    cout<<"The sum 0f two number is :"<< add(a,b) <<endl;
    return 0 ;
}