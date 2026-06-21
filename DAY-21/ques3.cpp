#include<iostream>
using namespace std;
int main(){
    string str = "SOMETHING IS DIFFERENT";

    int vowel =0 , consonent = 0 ;
    
    for(int i = 0 ; str[i]!='\0' ; i++){ 
        if(str[i]>='A' && str[i]<='Z'){ 
            if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
                vowel++;
            }
            else consonent++;
        }
    }

    cout << "Number of   vowel   is : " << vowel     << endl;
    cout << "Number of consonent is : " << consonent << endl;    
    
    return 0 ;
}
