#include<iostream>
using namespace std;
int main(){
     int arr[]={1,2,3,4,5,6,7};
    int n = 7 ;

    int first = arr[0];

    for(int i = 0 ; i< n-1 ; i++){
        arr[i]=arr[i+1];
    }

    arr[n-1] = first ;

    for(int i = 0 ; i< n ; i++){
        cout << arr[i] << " ";
    }
    cout<<endl;
    return 0 ;
}