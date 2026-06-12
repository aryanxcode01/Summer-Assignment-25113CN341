#include<iostream>
using namespace std;
bool isperfect(int x){
    int sum =0 ;
    for(int i = 1 ; i<=x/2 ; i++){
        if(x%i==0){
            sum+=i;
        }
    }
    return sum==x;

}
int main(){
    int n ; 
    cout << "enter number :";
    cin>>n;
    bool ans = isperfect(n);
    if(ans == true  ) cout<<n << " is a perfect number ";
    else cout <<  n << " is not a perfect number ";
    return 0 ;
}