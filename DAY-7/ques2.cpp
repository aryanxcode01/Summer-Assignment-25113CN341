#include<iostream>
using namespace std ;
int fibonacci(int x){
    if(x==0 || x==1 )  return x ;

    return fibonacci(x-1) + fibonacci(x-2);
}

int main(){
    int n ; 
    cout << "enter number :";
    cin>>n;

    for(int i = 0 ; i<= n ; i++){
        cout<< fibonacci(i) << " ";
    }
    cout<< endl;
    return 0 ;
}