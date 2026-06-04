#include<iostream>
#include<cmath>
using namespace std ;

bool isArmstrong(int n ){ 
    int temp = n;
    int digits = 0;
    int sum = 0;

    int x = n;
    while (x > 0) {
        digits++;
        x /= 10;
    }

    x = n;
    while (x > 0) {
        int ld = x % 10;
        sum += pow(ld, digits);
        x /= 10;
    }

    if(sum==temp) return true ;
    else return false ;
}
int main(){
    int m , n ;
    cout << "enter m :";
    cin>>m;
    cout << "enter n: ";
    cin>>n;
    for(int i = m ; i<= n ;i++){
        if(isArmstrong(i)){
            cout<< i << " ";
        }
    }
    cout << endl;
    return 0 ;
}