// longest prefix in an aaray

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<string> strs(n);
    for (int i = 0; i < n; i++)
    {
        cin >> strs[i];
    }
    string prefix = strs[0];

    for (int j = 1; j < n; j++)//j is the element pointing  next to prefix as prefix has index 0 j is starting from 1.
    {
        int i = 0;//i ponts to each charcter of j element.
        while (i < prefix.length() && i < strs[j].length() && prefix[i] == strs[j][i])//str[j] is the element next to prefix and str[j][i]
        //means it points to the chracter i of the j element
        {
            i++;
        }
        prefix = prefix.substr(0, i);
    }
    if (prefix == "")//edge case
    {
        cout << " """;
    }
    else
    {
        cout << prefix;
    }

    return 0;
}