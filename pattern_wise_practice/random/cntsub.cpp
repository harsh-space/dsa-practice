#include <bits/stdc++.h>
using namespace std;
int countRatioSubarrays(vector<int> &nums, int a, int b)
{
    int cnt = 0;
    int n = nums.size();
    vector<int> ecnt(n, 0);
    vector<int> ocnt(n, 0);
    for (int i = 0; i < n; i++)
    {
        int isEven = (nums[i] % 2 == 0) ? 1 : 0;
        int isOdd = (nums[i] % 2 != 0) ? 1 : 0;
        ecnt[i] = (i == 0) ? isEven : ecnt[i - 1] + isEven;
        ocnt[i] = (i == 0) ? isOdd : ocnt[i - 1] + isOdd;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            long long e = ecnt[j] - (i > 0 ? ecnt[i - 1] : 0);
            long long o = ocnt[j] - (i > 0 ? ocnt[i - 1] : 0);
            if (o != 0 && (e * b <= o * a))
            {
                cnt++;
            }
        }
    }
    return cnt;
}
int main()
{
    vector<int>ar={1,2,1,2};
    int a=3,b=2;
    cout<<countRatioSubarrays(ar,a,b);
    return 0;
}