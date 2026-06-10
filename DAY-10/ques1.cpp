#include<iostream>
using namespace std;
int main(){
    int n ;                            // take n = 5
    cout<<"enter n:";
    cin>>n;
    int nsp = n-1 , nst = 1 ;            // nsp -> no of space ; nst-> no of stars

    for(int i=1 ; i<= n ; i++){
        for(int j = 1 ; j<=nsp ; j++){
            cout<<" ";
        }
        for(int k = 1; k<=nst ;k++){
            cout<<"*";
        }
        nsp--;
        nst+=2;
        cout<<endl;
    }
    return 0 ;

}