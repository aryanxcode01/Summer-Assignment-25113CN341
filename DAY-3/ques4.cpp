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
int lcm(int a , int b ){
    return (a/gcd(a,b)*b);
}
int main(){
    int m , n;              
    cout << "enter m:";
    cin >> m;
    cout << "enter n :";
    cin >> n;
    cout <<  lcm(m,n);
    return 0 ;

}