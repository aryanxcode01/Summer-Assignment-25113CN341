#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n = 7 ;

    int st = 0 , end = n-1;
    while(st<end){
        swap(arr[st++] , arr[end--]);
    }
    for(int i = 0 ; i< n ;i++){
        cout<< arr[i] << " ";
    }
    cout<<endl;
    return 0 ;
}