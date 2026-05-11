#include <bits/stdc++.h>
using namespace std;
vector<int> separateDigits(vector<int> &nums)
{
    vector<int> ans;
    for (auto &it : nums)
    {
        string s = to_string(it);
        for (char &c : s)
        {
            ans.push_back(c - '0');
        }
    }
    return ans;
}
int main()
{   vector<int>arr={144,24,566,980};
    vector<int>ans=separateDigits(arr);
    for(int i:ans)cout<<i<<" ";
    return 0;
}