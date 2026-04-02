#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    int n;
    cout << "enter n:\n";
    cin >> n;

    vector<int> arr(n);

    cout << "enter the numbers in an array:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int smallest = INT_MAX;
    int largest = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
            largest = arr[i];

        if (arr[i] < smallest)
            smallest = arr[i];
    }

    cout << "Maximum element is: " << largest << endl;
    cout << "Minimum element is: " << smallest << endl;

    return 0;
}