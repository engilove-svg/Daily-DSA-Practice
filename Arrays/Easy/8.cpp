// Instead od printing,Count occurences

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n" << endl;
    cin >> n;
    int arr[n] = {10, 20, 30, 20, 20, 14};
    int target = 20;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            count++;
        }
    }
}