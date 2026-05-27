/*
    C - Vanish
    Time Limit: 2 sec
    Memory Limit: 1024 MiB

    Problem Statement:
    You are given an integer sequence:

        A = (A1, A2, ..., AN)

    Perform the following operation exactly K times:

        Choose an integer x.
        For every index i such that Ai = x,
        replace Ai with 0.

    Find the minimum possible sum of all elements
    after performing the operation exactly K times.

    --------------------------------------------------

    Constraints:
    - 1 <= K <= N <= 3 × 10^5
    - 1 <= Ai <= 10^9

    All input values are integers.

    --------------------------------------------------

    Input Format:
    N K
    A1 A2 ... AN

    --------------------------------------------------

    Output:
    Print the minimum possible sum of all elements
    after exactly K operations.

    --------------------------------------------------

    Sample Input 1:
    6 2
    7 2 7 2 2 9

    Sample Output 1:
    6

    Explanation:
    Initially:
    A = (7, 2, 7, 2, 2, 9)

    Choose x = 9:
    A = (7, 2, 7, 2, 2, 0)

    Choose x = 7:
    A = (0, 2, 0, 2, 2, 0)

    Final sum:
    0 + 2 + 0 + 2 + 2 + 0 = 6

    --------------------------------------------------

    Sample Input 2:
    8 6
    1 2 3 4 1 2 3 4

    Sample Output 2:
    0

    --------------------------------------------------

    Sample Input 3:
    10 2
    3 3 4 1 1 3 3 1 5 1

    Sample Output 3:
    8
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // int n = 10, k = 2;
    // vector<int> arr = {3, 3, 4, 1, 1, 3, 3, 1, 5, 1};
    unordered_map<long long, long long> mp;
    for (auto i : arr)
        mp[i] += i;
    vector<pair<long long, long long>> temp;
    for (auto it : mp)
    {
        temp.push_back({it.first, it.second});
    }
    sort(temp.begin(), temp.end(), [](const auto &p1, const auto &p2)
        { return p1.second > p2.second; });
    long long s=accumulate(arr.begin(),arr.end(),0LL);
    int i=0;
    while(k>0 && i<temp.size()){
        s-=temp[i].second;
        k--;
        i++;
    }
    cout<<s;
    return 0;
}