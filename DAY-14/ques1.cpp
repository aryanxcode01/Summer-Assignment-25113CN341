#include<iostream>
using namespace std;
int main(){
    int n = 6;
    int arr[n] = {1,5,8,7,4,2};
    int key = 7;

    int pos = -2;
    for(int i = 0 ; i< n ; i++){
        if(arr[i]==key) {
            pos = i ;
            break;
        }
    }

    if(pos!=-1) cout << "key element found at "<< pos ;
    else cout << "key element is not found";
    return 0 ;
}