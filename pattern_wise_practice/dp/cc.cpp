#include <bits/stdc++.h>
using namespace std;
int cc(int n, vector<int> &ar)
{
    if (n == 0 || n == 1)
        return 1;
    if (ar[n] != -1)
        return ar[n];
    return ar[n] = cc(n - 1, ar) + cc(n - 2, ar);
}
int climbStairs(int n)
{
    vector<int> ar(n + 1, -1);
    return cc(n, ar);
}
int main()
{   int n;
    cin>>n;
    cout<<climbStairs(n);
    return 0;
}