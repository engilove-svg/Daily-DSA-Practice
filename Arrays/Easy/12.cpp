// check if array is sorted
#include <iostream>
using namespace std;
int main()
{
    int i, n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool issorted = true;
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            issorted = false;
            break;
        }
    }
    if(issorted){
        cout<<"yes";
    }
    else {
        cout<<"no"<<endl;
    }
       

    return 0;
}