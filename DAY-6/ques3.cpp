#include<iostream>
using namespace std ;
int main(){
    int n ; 
    cout << "enter number :";
    cin>>n;

    int count = 0 ;

    while(n>0){
        count+= n%2;
        n/=2;
    }
    cout << "Set bits is : " << count << endl;
    return 0 ;
}