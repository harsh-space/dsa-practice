#include<bits\stdc++.h>

using namespace std;

long long maximumSumSubarray(int k, vector<int> &arr)
{
    int n = arr.size();
    if (n < k)
        return 0;
    long long current_sum = 0;
    for (int i = 0; i < k; i++)
    {
        current_sum += arr[i];
    }
    long long max_sum = current_sum;
    for (int i = k; i < n; i++)
    {
        current_sum += arr[i] - arr[i - k];
        max_sum = max(max_sum, current_sum);
    }

    return max_sum;
}

int main()
{
    vector<int> arr1 = {100, 200, 300, 400};
    int k1 = 2;
    cout << maximumSumSubarray(k1, arr1) << endl;
    vector<int> arr2 = {1, 4, 2, 10, 23, 3, 1, 0, 20};
    int k2 = 4;
    cout << maximumSumSubarray(k2, arr2) << endl;
    return 0;
}