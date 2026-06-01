#include<iostream>
using namespace std ;
int main(){
    int n ,count = 0 ; 
    cout << "enter n:";
    cin>> n ;
    while(n!=0){
        int ld = n%10 ;
        count++;
        n/=10;
    }
    cout<< "digits in n is  -> "<< count << endl;
    return 0 ;
}