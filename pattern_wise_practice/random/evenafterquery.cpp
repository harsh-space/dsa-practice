#include <bits/stdc++.h>
using namespace std;

vector<int> sumEvenAfterQueries(vector<int> &nums,
                                vector<vector<int>> &queries)
{
    int s = 0;
    for (int i : nums)
    {
        if (i % 2 == 0)
            s += i;
    }
    vector<int> ans(queries.size(), 0);
    for (int i = 0; i < queries.size(); i++)
    {
        if (nums[queries[i][1]] % 2 == 0)
        {
            s -= nums[queries[i][1]];
        }

        nums[queries[i][1]] += queries[i][0];
        if (nums[queries[i][1]] % 2 == 0)
        {
            s += nums[queries[i][1]];
        }
        ans[i] = s;
    }
    return ans;
}
int main()
{
    vector<int>nums={1,2,3,4};
    vector<vector<int>>queries={{1, 0}, {-3, 1}, {-4, 0}, {2, 3}};
    vector<int>ans=sumEvenAfterQueries(nums,queries);
    for(auto it:ans)cout<<it<<" ";
    return 0;
}