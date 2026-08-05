#include <bits/stdc++.h>
using namespace std;
int sumOddLengthSubarrays(vector<int> &arr)
{
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        int s = 0;
        for (int j = i; j < arr.size(); j++)
        {
            s += arr[j];
            if ((j - i + 1) % 2 != 0)
            {
                ans += s;
            }
        }
    }
    return ans;
}
int main()
{
    vector<int>ar={1,2,3,4,5,6};
    cout<<sumOddLengthSubarrays(ar);
    return 0;
}