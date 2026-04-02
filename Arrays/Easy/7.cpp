// Find all occurences
//Trick: don't use break
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter n" << endl;
    cin >> n;
    int arr[n] = {10, 20, 30, 20, 14};
    int target = 20;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            cout << "found at index:" << i << endl;
        }
    }

    return 0;
}