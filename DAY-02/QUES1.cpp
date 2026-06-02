#include<iostream>
using namespace std ;
int main(){
    int n ,sum=0;
    cout << "enter n:";
    cin>>n;
    while(n!=0){
        int ld=n%10;
        sum+=ld;
        n/=10;
    }
    cout << "sum of all digits -> " << sum <<endl ;
    return 0 ;
}