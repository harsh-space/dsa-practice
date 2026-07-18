#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    if (!(cin >> n >> m))
        return 0;

    vector<long long> av(n, 0);
    vector<long long> bv(n - 1, 0);

    for (int i = 0; i < n; i++)
        cin >> av[i];
    for (int i = 0; i < n - 1; i++)
        cin >> bv[i];

    long long total_ops = 0;

    for (int i = 0; i < n - 1; i++)
    {
        long long current_rem = (av[i] + av[i + 1]) % m;
        if (current_rem != bv[i])
        {
            long long needed = (bv[i] - current_rem) % m;
            if (needed < 0)
            {
                needed += m;
            }
            total_ops += needed;
            av[i + 1] += needed;
        }
    }
    cout << total_ops << "\n";
    return 0;
}