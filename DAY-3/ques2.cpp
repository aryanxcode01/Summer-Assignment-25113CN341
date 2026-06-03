#include<iostream>
using namespace std ;
bool isprime(int n ){
    if(n<=1) return false ;
    for(int i = 2 ; i*i < n ; i++){
        if(n%i==0) return false ;
    }
    return true ;
}
int main(){
    int m , n;              // m-> staring number , n-> ending number of range
    cout << "enter m:";
    cin >> m;
    cout << "enter n :";
    cin >> n;
    for(int i = m ; i<= n ; i++){
        if(isprime(i)){ 
        cout << i << " ";
        }
    }

}