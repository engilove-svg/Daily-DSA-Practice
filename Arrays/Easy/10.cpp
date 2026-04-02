// Find second largest element in array

#include <iostream>
#include <climits>
#include <vector>
using namespace std;
int main(){
    vector<int> v={10,20,30,40,40,70};

    int largest=INT_MIN;
    int second= INT_MAX;

    for(int i=0;i<v.size();i++){
       if (v[i]>largest){
        second=largest;
        largest=v[i];
       }else if (v[i]>second && v[i]!=largest){
        second = v[i];
       }
    
    }
    if (second ==INT_MIN)
        cout<<"No second largest element exists. "<<endl;
    else
        cout<<"Second largest element = "<<second<<endl;

   return 0;
}