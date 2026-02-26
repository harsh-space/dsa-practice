#include<bits/stdc++.h>
using namespace std;
vector<int> nextGreaterElements(vector<int> &nums)
{
    int n = nums.size();
    if (n == 0)
        return {};
    vector<int> res(n, -1);

    for (int i = 0; i < n; ++i)
    {
        for (int step = 1; step < n; ++step)
        {
            int idx = (i + step) % n;
            if (nums[idx] > nums[i])
            {
                res[i] = nums[idx];
                break;
            }
        }
    }
    return res;
}
int main(){
    vector<int>arr={1,2,1};
    vector<int>ans=nextGreaterElements(arr);
    for(int i:ans){
        cout<<i<<" ";
    }
    return 0;

}