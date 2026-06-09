#include<iostream>
using namespace std;
int main(){

    int n ;
    cout<<"enter rows: ";            // n->5
    cin>>n;

    int ndt=n ;                       // ndt -> no of digits
    for(int i = 1 ; i<= n ; i++){
        for(int j=1 ; j<=ndt ; j++){
            cout<< j;
        }
        ndt--;
        cout<<endl;
    }
    return 0 ;


}