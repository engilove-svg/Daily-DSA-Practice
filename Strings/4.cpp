// count occurence of character
#include <iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;

    char ch;
    cin>>ch;
    int count = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]== ch)
        {
            count++;
        }
    }
    cout<<"Count is: "<<count<<endl;
    return 0;
}