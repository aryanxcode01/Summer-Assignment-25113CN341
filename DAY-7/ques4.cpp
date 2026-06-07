#include<iostream>
using namespace std ;

int reversed(int x, int rev =0){
    if(x==0) return rev;

    return reversed(x/=10 , rev*10 + x%10);
}
int main(){
    int n ; 
    cout << "enter number :";
    cin>>n;

    cout<< "Reversed number is : " << reversed(n)<<endl;
    return 0 ;
}