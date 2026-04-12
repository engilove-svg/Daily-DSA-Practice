#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {1,1,1,2,2,3,3,4,4,5,5,5,5,5};

    if(nums.empty()) return 0;

    int i = 0;

    for(int j = 1; j < nums.size(); j++){
        if(nums[j] != nums[i]){
            i++;
            nums[i] = nums[j];
        }
    }

    int k = i + 1;
    cout << "Unique Array: ";
    for(int x = 0; x < k; x++){
        cout << nums[x] << " ";
    }

    return 0;
}
