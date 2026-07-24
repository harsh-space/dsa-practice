#include <bits/stdc++.h>
using namespace std;
long long getDescentPeriods(vector<int> &prices)
{
    long long ans = 0;
    int i = 0, j = 1;
    while (j < prices.size())
    {
        if ((prices[j - 1] - prices[j]) == 1)
        {
            j++;
        }
        else
        {
            long long n = j - i;
            ans += ((n) * (n + 1)) / 2;
            i = j;
            j++;
        }
    }
    long long n = j - i;
    ans += ((n) * (n + 1)) / 2;
    return ans;
}

int main()
{   
    vector<int>ar={3,2,1,4};
    cout<<getDescentPeriods(ar);
    return 0;
}