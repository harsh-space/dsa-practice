#include <bits/stdc++.h>
using namespace std;

int rev(int n)
{
    int t = 0;
    while (n > 0)
    {
        int d = n % 10;
        t = t * 10 + d;
        n /= 10;
    }
    return t;
}
bool sumOfNumberAndReverse(int num)
{
    for (int i = 0; i <= num; i++)
    {
        if (i + rev(i) == num)
            return true;
    }
    return false;
}
int main()
{
    cout<<sumOfNumberAndReverse(443);
    return 0;
}