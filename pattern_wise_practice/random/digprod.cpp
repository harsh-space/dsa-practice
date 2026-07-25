#include <bits/stdc++.h>
using namespace std;
int maxProduct(int n)
{
    vector<int> ar(10, 0);
    while (n > 0)
    {
        int d = n % 10;
        ar[d]++;
        n /= 10;
    }

    int mx = INT_MIN;
    for (int i = 9; i >= 0; i--)
    {
        for (int j = i; j >= 0; j--)
        {
            if (i == j)
            {
                if (ar[i] >= 2)
                {
                    mx = max(mx, i * j);
                }
            }
            else
            {
                if (ar[i] > 0 && ar[j] > 0)
                {
                    mx = max(mx, i * j);
                }
            }
        }
    }
    return mx;
}

int main()
{
    int n=3155;
    cout << maxProduct(n);
    return 0;
}