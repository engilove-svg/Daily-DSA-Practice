//Take input & print array

#include <iostream>
using namespace std;

int main(){
    int arr[5];

    cout<<"enter 5 numbers: "<<endl;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"array elements are:"<<endl;
     for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }


    return 0;
}
