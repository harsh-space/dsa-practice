#include <bits/stdc++.h>
using namespace std;

int minMoves(vector<int>& nums) {
        int min_val = nums[0];
        long long sum = 0;
        for (int num : nums) {
            if (num < min_val) min_val = num;
            sum += num;                      
        }
        return sum - ((long long)nums.size() * min_val);
    }

int main()
{
    vector<int>ar={1,2,3};
    cout<<minMoves(ar);
    return 0;
}