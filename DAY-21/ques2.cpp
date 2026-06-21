#include<iostream>
using namespace std;
int main(){
    string str = "ARYAN";
    int st  = 0  , end = str.length() -1;
    while(st<end){
        char temp = str[st];
        str[st] = str[end];
        str[end]=temp ;
        st++; end--;
    }
    cout << "Reversed string: " << str << endl;
    return 0 ;
}