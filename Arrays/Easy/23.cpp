// two sum

// If I pick this number…
// what number do I still need?
// 1. Pick current element
// 2. Compute need = target - current
// 3. If need exists in map → answer found
// 4. Else → store current element in map

// hashing approach

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main()
{
    vector<int> nums = {2, 3, 4, 5, 6};
    int n = nums.size();
    int target;
    cin >> target;
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int need = target - nums[i];

        if (m.find(need) != m.end())
        {
            return m[need], i;
        }
        // then insert
        return m[nums[i]] = i;
    }

    return 0;
}