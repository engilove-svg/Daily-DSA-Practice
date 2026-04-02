// Find max and min in an array

#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n;
    cout<<"enter n:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the numbers in an array:"<<endl;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int smallest=INT_MAX;
    int largest=INT_MIN;
    for (int i=0;i<n;i++){
        if(arr[i]>largest){
            arr[i]=largest;
        } 
        if(arr[i]<smallest){
            arr[i]=smallest;
        }
    }
   cout<<"Maximum element is:"<<largest<<endl;
   cout<<"Minimum element is:"<<smallest<<endl;
   return 0;
}