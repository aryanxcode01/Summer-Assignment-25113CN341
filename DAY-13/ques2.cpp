#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int arr[n]={8,9,5,4,3};

    int sum = 0 ;
    for(int i = 0 ; i< n ; i++){
        sum+=arr[i];
    }
    cout<< "The sum of arrray elements is: " << sum << endl;
    int avg = sum /n;
    cout<< "The average of array element is: " << avg << endl;
    return 0 ;
}