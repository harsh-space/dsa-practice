#include <bits/stdc++.h>
using namespace std;
void sortColors(vector<int> &nums)
{
    if (nums.size() < 2)
        return;

    int i = 0;

    for (int j = 0; j < nums.size(); j++)
    {
        if (nums[j] == 0)
        {
            swap(nums[i], nums[j]);
            i++;
        }
    }

    for (int j = i; j < nums.size(); j++)
    {
        if (nums[j] == 1)
        {
            swap(nums[i], nums[j]);
            i++;
        }
    }
}

int main(){
    vector<int>arr={2,0,2,1,1,0};
    sortColors(arr);
    for(int i:arr){
        cout<<i<<" ";
    }
}