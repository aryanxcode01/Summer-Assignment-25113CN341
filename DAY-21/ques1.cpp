#include<iostream>
using namespace std ;
int main(){
    string str = "hello world";
    int i = 0 ;
    int length=0;
    while(str[i]!='\0'){
        length++;
        i++;
    }
    cout<< "Length of string is : " << length << endl;
    return 0 ;
}