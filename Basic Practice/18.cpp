// Program to find prime numbers 2 to n
#include <iostream>
using namespace std;
bool isprime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (i % n == 0)
        {
            return false;
        }
        return true;
    }
}
int prime(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (isprime(i))
        {
            cout << i << " ";
        }
    }
}
int main()
{
    int n;
    cin >> n;
    isprime(n);
    prime(n);

    return 0;
}
