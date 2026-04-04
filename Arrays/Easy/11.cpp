//sum of elements at even index
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    for (int i=0;i<n;i++){
        if(arr[i]%2==0){
           sum+=arr[i];
        }
    }
    cout<<"sum of even numbers in array is:"<<sum<<endl;
    return 0;
}