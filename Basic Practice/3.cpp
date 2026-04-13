//print Character pattern
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        char ch = 'A';
        for (int j = 0; j < n; j++)
        {
            cout << ch;
            ch = ch + 1; // 65+1=>66->B
        }
        cout<<endl;
    }

    return 0;
}