#include<iostream>
using namespace std;
int gcd(int a , int  b){
    while(b!=0){
        int rem = a%b;
        a = b ;
        b = rem;
    }
    return a ;
}
int main(){
    int m , n;              
    cout << "enter m:";
    cin >> m;
    cout << "enter n :";
    cin >> n;
    cout <<  gcd(m,n);
    return 0 ;

}