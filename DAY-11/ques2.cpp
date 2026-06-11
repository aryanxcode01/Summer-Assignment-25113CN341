#include<iostream>
using namespace std ; 
int maximum(int x , int y){
    if(x>y) return x;
    else return y;
}

int  main(){
    int a ;
    cout<<"enter a :";
    cin>>a ;
    int b ; 
    cout<<"enter b : ";
    cin>>b;
    
    cout<<"The maximum between two number is :"<< maximum(a,b) <<endl;
    return 0 ;
}