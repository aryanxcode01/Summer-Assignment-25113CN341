#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 1, 2, 4, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    unordered_map<int , int > freq;

    for(int i = 0 ; i < n ; i++){
        freq[arr[i]]++;
    }

    int maxfreq= 0  ;
    int element = -1;

    for(auto it : freq){
        while(it.second > maxfreq){
            maxfreq = it.second;
            element = it.first;
        }
    }

    cout<< "element with maximum frequency : " << element << endl;
    cout<< "The maximum frequenncy  is :" << maxfreq << endl;
    return 0 ;

}