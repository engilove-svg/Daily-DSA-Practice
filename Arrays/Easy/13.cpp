//sum of each row in 2d array

#include <iostream>
#include <vector>
using namespace std;
int main(){
    int i,n ;
    cin>>n;
    int sum=0;
    vector<vector<int>> arr;
    for (int i=0;i<n;i++){//size of an array
        int k;
        cin>>k;
        vector<int> temp;
        for(int j=0;j<k;j++){
            int x;//these are the elements
            cin>>x;
            temp.push_back(x);
        }
        arr.push_back(temp);
    }
    for(int j=0;j<arr[i].size();j++){
         sum+=arr[i][j];
    }
    cout<<sum<<endl;
    
    return 0;
}