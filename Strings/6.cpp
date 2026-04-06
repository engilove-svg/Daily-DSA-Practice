//check if two strings are equal

#include<iostream>
using namespace std;

int main(){
    string s1, s2;
    cin >> s1 >> s2;

    if(s1.length() != s2.length()){
        cout << "Not Equal";
        return 0;
    }

    bool isEqual = true;

    for(int i = 0; i < s1.length(); i++){
        if(s1[i] != s2[i]){
            isEqual = false;
            break;
        }
    }

    if(isEqual){
        cout << "Equal";
    }else{
        cout << "Not Equal";
    }

    return 0;
}


