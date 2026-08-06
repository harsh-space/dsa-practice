#include <bits/stdc++.h>
using namespace std;
int prod(int num)
{
    int p = 1;
    while (num > 0)
    {
        int dig = num % 10;
        p *= dig;
        num /= 10;
    }
    return p;
}
int smallestNumber(int n, int t)
{
    int p_num;
    int temp = n;
    while (n <= 100)
    {
        p_num = prod(n);
        if (p_num % t == 0)
        {
            return n;
        }
        else
        {
            n++;
            continue;
        }
    }
    return temp;
}
int main()
{
    int n=11,t=3;
    cout<<smallestNumber(n,t);
    return 0;
}