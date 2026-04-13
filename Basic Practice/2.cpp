// pattern problems
// Square pattern
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    { // colomn wise iterating
        for (int j = 1; j <= n; j++)
        { // row wise iterate
            cout << j;
        }
        cout << endl;
    }
    return 0;
}