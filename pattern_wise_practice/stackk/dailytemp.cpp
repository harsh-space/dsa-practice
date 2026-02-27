#include <bits/stdc++.h>
using namespace std;
vector<int> dailyTemperatures(vector<int> &nums)
{
    vector<int> ans(nums.size(), 0);
    for (int i = 0; i < nums.size(); i++)
    {
        int temp = nums[i];
        int count = 0;
        for (int j = i + 1; j < nums.size(); j++)
        {
            count++;
            if (nums[j] > temp)
            {
                ans[i] = count;
                break;
            }
        }
    }
    return ans;
}
int main(){
    vector<int>arr={73,74,75,71,69,72,76,73};
    vector<int>ans=dailyTemperatures(arr);
    for(int i:ans){
        cout<<i<<" ";
    }
    return 0;
}