
#include <bits/stdc++.h>
using namespace std;

int maximumProduct(vector<int>& nums) {
        vector<int>t=nums;
        sort(t.begin(),t.end());
        sort(nums.begin(),nums.end(),greater<int>());
        return max(nums[0]*nums[1]*nums[2],t[0]*t[1]*nums[0]);
    }

int main(){
    vector<int>nums={-100,-98,-1,3,4,5,2};
    cout<<maximumProduct(nums);
    return 0;
}