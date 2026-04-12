//find duplicate 
//1. Pick an element
//2. Check if it already exists in the set
//3. If YES → duplicate found
//4. If NO → insert it into the set
#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int main(){
    vector<int> nums={1,1,1,2,3,4,4,5,5,5};
    unordered_set<int> m;
    for(int i=0;i<nums.size();i++){
        if(m.find(nums[i])!=m.end()){
            cout<<"Found";
        }
        m.insert(nums[i]);
    }
    return 0;
}
