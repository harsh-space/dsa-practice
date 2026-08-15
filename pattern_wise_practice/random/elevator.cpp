#include <bits/stdc++.h>
using namespace std;
int elevatorRequests(int n, vector<int> &requests)
{
    int ans = 0;
    int cur = 0;
    for (int i = 0; i < requests.size(); i++)
    {
        ans += abs(requests[i] - cur);
        cur = requests[i];
    }
    return ans;
}
int main()
{   int n=5;
    vector<int>ar={2,1,3,4};
    cout<<elevatorRequests(n,ar);
    return 0;
}