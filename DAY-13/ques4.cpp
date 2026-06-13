#include<iostream>
using namespace std;
int main(){
    int n = 7 ;
    int arr[7]={78,9,7,56,7,8,75};
    int even =0 , odd = 0 ;

    for(int i = 0  ; i< n ; i++){
        if(arr[i]%2==0) even++;
        else odd++;
    }

    cout << "Number of even elements in the array is: " << even << endl ;
    cout << "Number of odd  elements in the array is: " << odd  << endl ;
    
    return 0 ;
}