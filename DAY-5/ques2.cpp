#include<iostream>
using namespace std;
int factorial(int a){
    int product = 1 ;
    for(int i = 1 ; i <=a ; i++){
        product*=i;
    }
    return product ;
}
bool isperfect(int n ){
    int temp  = n ;
    int sum = 0 ;
    while(n>0){ 
        int ld = n %10 ; 
        sum += factorial(ld);
        n/=10;
    }
    return sum==temp;
}
int main(){
    int n ; 
    cout << "enter n :";
    cin>>n;

    if(isperfect(n)){
        cout << n << " is a perfect number";
    }

    else cout << n << " is not a perfect number";
}