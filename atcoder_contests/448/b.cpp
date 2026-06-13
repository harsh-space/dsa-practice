/*
    B - Pepper Addiction
    Time Limit: 2 sec
    Memory Limit: 1024 MiB

    Score:
    200 points

    ------------------------------------------------------------
    Problem Statement
    ------------------------------------------------------------

    Takahashi loves pepper.

    A restaurant has M types of pepper, called type 1,2,…,M.
    There are Cj grams of type j pepper at this restaurant.

    He ordered N dishes at this restaurant.

    Due to compatibility, only type Ai pepper can be sprinkled
    on dish i (1 ≤ i ≤ N), and the upper limit on the amount
    of pepper that can be sprinkled on dish i is Bi grams.

    Also, he can only use the pepper available at the restaurant.
    That is, the total amount of type j pepper sprinkled cannot
    exceed Cj grams.

    He decides how much pepper to sprinkle on each dish to maximize
    the total amount of pepper sprinkled on the dishes.

    Find the maximum total grams of pepper he can sprinkle.

    ------------------------------------------------------------
    Constraints
    ------------------------------------------------------------

    - All input values are integers.
    - 1 ≤ N, M ≤ 1000
    - 1 ≤ Ai ≤ M
    - 1 ≤ Bi, Ci ≤ 10^6

    ------------------------------------------------------------
    Input
    ------------------------------------------------------------

    The input is given from Standard Input in the following format:

        N M
        C1 C2 ... CM
        A1 B1
        A2 B2
        .
        .
        .
        AN BN

    ------------------------------------------------------------
    Output
    ------------------------------------------------------------

    Output the answer as an integer.

    ------------------------------------------------------------
    Sample Input 1
    ------------------------------------------------------------

    7 5
    4 4 8 3 7
    1 2
    2 3
    5 2
    4 10
    2 3
    5 4
    2 3

    ------------------------------------------------------------
    Sample Output 1
    ------------------------------------------------------------

    15

    ------------------------------------------------------------
    Explanation
    ------------------------------------------------------------

    In this input, there are five types of pepper, with:

        4, 4, 8, 3, 7

    grams of type:

        1, 2, 3, 4, 5

    pepper respectively.

    One optimal way to sprinkle a total of 15 grams is:

    - Sprinkle 2 grams of type 1 pepper on dish 1.
    - Sprinkle no pepper on dish 2.
    - Sprinkle 2 grams of type 5 pepper on dish 3.
    - Sprinkle 3 grams of type 4 pepper on dish 4.
    - Sprinkle 1 gram of type 2 pepper on dish 5.
    - Sprinkle 4 grams of type 5 pepper on dish 6.
    - Sprinkle 3 grams of type 2 pepper on dish 7.

    ------------------------------------------------------------
    Sample Input 2
    ------------------------------------------------------------

    1 1
    1
    1 1

    ------------------------------------------------------------
    Sample Output 2
    ------------------------------------------------------------

    1

    ------------------------------------------------------------
    Sample Input 3
    ------------------------------------------------------------

    15 10
    7 94 100 82 63 81 75 2 76 73
    10 44
    5 77
    10 47
    7 32
    2 82
    5 90
    3 37
    6 70
    6 28
    3 25
    2 26
    10 56
    1 69
    5 46
    7 26

    ------------------------------------------------------------
    Sample Output 3
    ------------------------------------------------------------

    438
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    unordered_map<int, int> mp;
    for (int i = 1; i <= m; i++)
    {
        int g;
        cin >> g;
        mp[i] = g;
    }
    vector<int> a(n + 1, 0);
    vector<int> b(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i] >> b[i];
    }
    int mxp = 0;
    for (int i = 1; i <= n; i++)
    {
        if (mp[a[i]] > 0)
        {
            mxp += min(b[i], mp[a[i]]);
            mp[a[i]] -= b[i];
        }
    }
    cout << mxp;
    return 0;
}