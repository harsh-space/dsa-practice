#include <bits/stdc++.h>
using namespace std;
bool checkpossibility(vector<int> &nums)
{
    for (int i = 0; i < (int)nums.size() - 1; i++)
    {
        if (nums[i] > nums[i + 1])
        {
            int curr = nums[i];
            int next = nums[i + 1];
            nums[i] = next;
            if (is_sorted(nums.begin(), nums.end()))
                return true;
            nums[i] = curr;
            nums[i + 1] = curr;
            if (is_sorted(nums.begin(), nums.end()))
                return true;
            return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> num;
    while (n--)
    {
        int ele;
        cin >> ele;
        num.push_back(ele);
    }
    if (checkpossibility(num))
    {
        cout << "Achievable" << endl;
        return 0;
    }
    cout << "Not achievable" << endl;
    return 0;
}