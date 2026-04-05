#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    int max = INT_MIN;
    for (i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << "maximum is:" << max << endl;

    return 0;
}