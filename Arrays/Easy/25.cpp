// return index of first non- repeating character
#include<iostream>
#include<vector>
#include<unordered_map>
#include <algorithm>
using namespace std;
int main(){
    string s;
    unordered_map<char,int> en;
    cin>>s;

    for(int i=0;i<s.length();i++){
        en[s[i]]++;
    }
    for(int i=0;i<s.length();i++){
        if(en[s[i]]==1){
            cout<<i;
            return 0;
        }
        }


    return 0;
}