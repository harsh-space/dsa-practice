#include <bits/stdc++.h>
using namespace std;
vector<int> findThePrefixCommonArray(vector<int> &A, vector<int> &B)
{
    vector<int> ans;
    int n = A.size();
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        unordered_map<int, bool> mp;
        for (int j = 0; j <= i; j++)
            mp[A[j]] = true;
        for (int j = 0; j <= i; j++)
        {
            if (mp.count(B[j]))
                cnt++;
        }
        ans.push_back(cnt);
    }
    return ans;
}
int main()
{
    vector<int>A={1,3,2,4};
    vector<int>B={3,1,2,4};
    vector<int>ans=findThePrefixCommonArray(A,B);
    for(int i:ans)cout<<i<<" ";
    return 0;
}