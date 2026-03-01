#include <bits/stdc++.h>
using namespace std;
vector<int> findDisappearedNumbers(vector<int> &nums)
{
    int n = nums.size();
    vector<int> v(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        v[nums[i]]++;
    }
    vector<int> ans;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] == 0)
        {
            ans.push_back(i);
        }
    }

    return ans;
}

int main(){
    vector<int>a={4,3,2,7,8,2,3,1};
    vector<int>ans=findDisappearedNumbers(a);
    for(int i:ans){

        cout<<i<<" ";
    }
    return 0;
}