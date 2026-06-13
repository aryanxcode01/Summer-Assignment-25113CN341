#include<iostream>
using namespace std;
int main(){
    int n = 7 ;
    int arr[7]={78,9,7,56,7,8,75};
    int smallest = INT_MAX ;
    int largest = INT_MIN;

    for(int i = 0 ; i< n ; i++){
        smallest = min(smallest , arr[i]);
        largest= max(largest , arr[i]);
    }

    cout << "The largest element of array is: " << largest << endl;
    cout << "The smallest element of array is: " << smallest << endl;
    return 0 ;
}