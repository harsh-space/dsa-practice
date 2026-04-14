#include <bits/stdc++.h>
using namespace std;

int helper(int n)
{
    if (n == 0 || n == 1)
        return 1;

    return helper(n - 1) + helper(n - 2);
}
int main()
{
    cout<<helper(3);
    return 0;
}