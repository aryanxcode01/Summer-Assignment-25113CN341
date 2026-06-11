#include<iostream>
using namespace std;
bool isprime(int x ){
    for (int i = 2 ; i*i<=x; i++){
        if(x%i==0){ 
        return false;
        break;
        }
    }
    return true ;
}
int main(){
    int n ;
    cout<<"enter n:";
    cin>>n;
    bool ans = isprime(n);
    if(ans==true){
        cout<<n<<" is prime number ";
    }
    else cout<<n << " is not prime number";
    return 0 ;
}