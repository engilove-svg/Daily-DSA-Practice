//sum of array using vectors
# include <iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;

    vector <int> arr(n);
    int sum=0;
    for (int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    for (int i=0;i<arr.size();i++){
        sum+=arr[i];
    }
    cout<<"sum is:"<<sum<<endl;

    return 0;
}