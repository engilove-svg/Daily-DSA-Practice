// Search an element
#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {2, 3, 4, 5, 6};
    int target = 4;

    int index = -1; // means "not found"

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == target)
        {
            index = i;
            break; // stop when found
        }
    }
    if (index != -1)
        cout << "element found at index:" << index;
    else
        cout << "element not found";

    return 0;
}