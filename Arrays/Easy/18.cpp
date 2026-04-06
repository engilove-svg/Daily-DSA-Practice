//check if array is sorted
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr;
    for(int i=0;i<arr.size();i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    bool issorted=true;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>arr[i+1]){
            issorted=true;
        }
        else
           cout<<"not sorted";
    }
    if(issorted){
        cout<<"sorted"<<endl;
    }
    else{
        cout<<"not sorted";
    }
    return 0;
}