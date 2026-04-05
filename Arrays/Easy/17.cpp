// find all occurences in array using vector
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, target;
    cout << "size of an array:" << endl;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "what is the target?" << endl;
    cin >> target;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            count++;
        }
    }
    cout<<"number of times target appears :\n"<<count<<endl;
    return 0;
}