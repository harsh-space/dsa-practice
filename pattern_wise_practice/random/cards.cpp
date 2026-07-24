#include <bits/stdc++.h>
using namespace std;
int minimumCardPickup(vector<int> &cards)
{
    unordered_map<int, int> mp;
    int ans = INT_MAX;
    int i = 0, j = 0;
    while (j < cards.size())
    {
        mp[cards[j]]++;
        while (mp[cards[j]] == 2)
        {
            ans = min(ans, j - i + 1);
            mp[cards[i]]--;
            i++;
        }
        j++;
    }
    if (ans != INT_MAX)
        return ans;
    else
        return -1;
}
int main()
{
    vector<int>ar={3,4,2,3,4,7};
    cout<<minimumCardPickup(ar);
    return 0;
}