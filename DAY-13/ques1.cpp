#include<iostream>
using namespace std ;
int main(){
    int n ; 
    cout<<"size of array:";
    cin>>n;
    int arr[n];

    cout<< n << " elements\n";
    for(int i = 0 ; i < n ; i++){
        cin>> arr[i] ;
    }
    cout<< "array elements: ";
    for(int i = 0 ; i< n ; i++){
        cout << arr[i] << " ";
    }
    cout<<endl;
    return 0;
}