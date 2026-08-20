#include <bits/stdc++.h>
using namespace std;
vector<int> resultArray(vector<int> &nums)
{
    vector<int> a, b;
    a.push_back(nums[0]);
    b.push_back(nums[1]);
    for (int i = 2; i < nums.size(); i++)
    {
        if (a.back() > b.back())
        {
            a.push_back(nums[i]);
        }
        else
        {
            b.push_back(nums[i]);
        }
    }
    for (int &i : b)
    {
        a.push_back(i);
    }
    return a;
}
int main()
{   
    vector<int>a={2,1,3};
    vector<int>ans=resultArray(a);
    for(int i:ans)cout<<i<<" ";
    return 0;
}