#include <bits/stdc++.h>
using namespace std;
bool isMiddleElementUnique(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i:nums)mp[i]++;
        if(mp[nums[nums.size()/2]]>1)return false;
        return true;
    }
int main()
{   
    vector<int>ar={1,3,5,2,8};
    cout<<isMiddleElementUnique(ar);
    
    
    return 0;
}