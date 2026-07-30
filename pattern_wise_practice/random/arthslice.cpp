#include <bits/stdc++.h>
using namespace std;

int numberOfArithmeticSlices(vector<int> &nums)
{
    if (nums.size() < 3)
        return 0;

    int count = 0;
    int current = 0;

    for (int i = 2; i < nums.size(); i++)
    {
        // If the spacing matches the previous pair
        if (nums[i] - nums[i - 1] == nums[i - 1] - nums[i - 2])
        {
            current++;
            count += current;
        }
        else
        {
            current = 0; // Reset if pattern breaks
        }
    }
    return count;
}

int main(){
    vector<int>ar={1,2,3,4};
    cout<<numberOfArithmeticSlices(ar);
    return 0;
}
