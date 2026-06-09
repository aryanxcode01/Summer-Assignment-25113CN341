#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter rows: ";            // n->4
    cin>>n;

    int nst=n ;                       // nst -> no of stars
    for(int i = 1 ; i<= n ; i++){
        for(int j=1 ; j<=nst ; j++){
            cout<< "*";
        }
        nst--;
        cout<<endl;
    }
    return 0 ;
}