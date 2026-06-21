#include<iostream>
using namespace std;
int main(){
     string str = "something is different";
    
    for(int i = 0 ; str[i]!='\0' ; i++){ 
        str[i]=toupper(str[i]);
    }
    cout << "Upppercase string  is : " << str << endl;
    return 0 ;
}