#include<iostream>
#include<cmath>
using namespace std;
bool isarmstrong(int n){
    int temp = n;
    int digits = 0;
    int sum = 0;

    // Count digits
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = n;

    // Calculate sum of digits raised to the power digits
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return sum == n;
}
int main(){
    int n ;
    cout<<"enter number:";
    cin>>n;
    bool ans = isarmstrong(n);
    if(ans==true) cout << n << " is a armstrong number ";
    else cout << n << " is not a armstrong number ";
    return 0 ;
}