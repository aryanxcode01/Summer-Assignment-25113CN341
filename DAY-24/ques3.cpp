#include<iostream>
#include<algorithm>
using namespace std ;
int main(){
    string s1 = "ARYAN";
    string s2 = "BHAUKAL";

    if(s1.length()!=s2.length()){
        cout << " They are not anagrams" << endl;
    }

    sort(s1.begin() , s1.end());
    sort(s2.begin() , s2.end());

    if(s1==s2) cout << "They are anagrams";
    else "They are not anagrams";
    return 0 ;
}