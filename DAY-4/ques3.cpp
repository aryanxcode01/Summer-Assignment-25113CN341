#include<iostream>
using namespace std;
int main(){
    int n ,sum=0;
    cout<< "enter a number :";
    cin>>n;
    int temp = n ;
    while(n>0){
        int ld = n%10 ;
        sum+=(ld*ld*ld);
        n/=10;
    }
    if(sum==temp) cout << temp << " is a armstrong number";
    else cout << temp << " is not a armstrong number ";
}