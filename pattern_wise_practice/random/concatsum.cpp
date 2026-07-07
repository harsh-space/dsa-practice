#include <bits/stdc++.h>
using namespace std;
long long sumAndMultiply(int n)
{
    long long nn = 0;
    int m = 0;
    while (n > 0)
    {
        int d = n % 10;
        if (d != 0)
        {
            nn = nn * 10 + d;
            m += d;
        }
        n /= 10;
    }
    long long mn = 0;
    while (nn > 0)
    {
        int d = nn % 10;
        if (d != 0)
        {
            mn = mn * 10 + d;
        }
        nn /= 10;
    }
    return mn * m;
}
int main()
{
    int n=10203004;
    cout<<sumAndMultiply(n);
    return 0;
}