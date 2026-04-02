// Find sum of Array and product

#include <iostream>
using namespace std;
int main(){
    int arr[5];
    int sum=0;
    long long product=1;
    cout<<"enter the numbers"<<endl;
    for (int i=0;i<5;i++){
        cin>>arr[i];
    }
     for (int i=0;i<5;i++){
        sum+=arr[i];
        product*=arr[i];
    }
    cout<<"sum is:"<<sum<<endl;
    cout<<"product is:"<<product<<endl;

    return 0;
}