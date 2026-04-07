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

    for (int j = 1; j < n; j++)
    {
        int i = 0;
        while (i < prefix.length() && i < strs[j].length() && prefix[i] == strs[j][i])
        {
            i++;
        }
        prefix = prefix.substr(0, i);
    }
    if (prefix == "")
    {
        cout << " """;
    }
    else
    {
        cout << prefix;
    }

    return 0;
}