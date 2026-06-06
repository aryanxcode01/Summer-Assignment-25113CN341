#include<iostream>
using namespace std ;
double mypow(double x , int n ){
    long long binFORM = n ;
    if(n<0){
        x=1/x;
        binFORM = -binFORM ;
    }
    double ans = 1 ;
    while(binFORM > 0){
        if(binFORM%2==1){
            ans*=x;
        }
        x*=x;
        binFORM/=2;

    }
    return ans ;
}
int main(){
    double x ;
    cout<< " enter base:";
    cin>>x ; 
    int n ;
    cout << "enter power :";
    cin>>n;
    double  ans = mypow(x , n );
    cout<< "answer : " << ans << endl;
    return 0 ;
}