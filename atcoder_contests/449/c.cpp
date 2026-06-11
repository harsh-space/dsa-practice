/*
    C - Comfortable Distance

    Time Limit: 2 sec
    Memory Limit: 1024 MiB

    Score:
    300 points


    Problem Statement
    -----------------
    You are given a string S of length N consisting of lowercase English letters.

    Find the number of pairs of integers (i, j) satisfying all of the following conditions:

        1 ≤ i ≤ j ≤ N
        S[i] = S[j]
        L ≤ (j - i) ≤ R


    Constraints
    -----------
        2 ≤ N ≤ 5 × 10^5
        1 ≤ L ≤ R ≤ N - 1

        N, L, and R are integers.
        S is a string of length N consisting of lowercase English letters.


    Input
    -----
    The input is given from Standard Input in the following format:

        N L R
        S


    Output
    ------
    Output the answer.


    Sample Input 1
    --------------
        6 2 4
        aabcba

    Sample Output 1
    ---------------
        2

    The pairs satisfying the conditions are:

        (i, j) = (2, 6), (3, 5)

    Hence, the answer is 2.


    Sample Input 2
    --------------
        9 3 6
        aaaaaaaaa

    Sample Output 2
    ---------------
        18


    Sample Input 3
    --------------
        10 2 6
        aabbccaabb

    Sample Output 3
    ---------------
        6
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, l, r;
    string s;

    cin >> n >> l >> r;
    cin >> s;
    long long cnt = 0;
    unordered_map<char, vector<int>> mp;
    for (int i = 0; i < n; i++)
    {
        mp[s[i]].push_back(i);
    }
    for (auto it : mp)
    {
        auto const& v = it.second;
        for (int i = 0; i < v.size();i++)
        {
            auto low = lower_bound(v.begin(), v.end(),v[i]+l );
            auto high=upper_bound(v.begin(),v.end(),v[i]+r);
            cnt+=high-low;
        }
    }
    cout << cnt;
    return 0;
}