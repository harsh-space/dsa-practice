/*
    C - Understory

    Time Limit: 2 sec
    Memory Limit: 1024 MiB

    Score:
    300 points

    Problem Statement
    -----------------
    Takahashi is managing the number of trees in his garden.
    Initially, there are no trees in the garden.

    Q queries are given in order.
    Each query is one of the following two types.

    1 h :
        Add one new tree of height h to the garden.

    2 h :
        Remove all trees currently in the garden
        whose height is at most h.

    Immediately after processing each query,
    output the number of trees currently in the garden.

    Constraints
    -----------
    1 ≤ Q ≤ 3 × 10^5
    1 ≤ h ≤ 10^9

    All input values are integers.

    Input
    -----
    The input is given from Standard Input in the following format:

    Q
    query1
    query2
    ⋮
    queryQ

    Each query is one of the following two types:

    1 h
    2 h

    Output
    ------
    Output Q lines.

    The i-th line should contain the number of trees
    in the garden immediately after processing the i-th query.

    Sample Input 1
    --------------
    5
    1 5
    1 7
    1 8
    2 7
    1 3

    Sample Output 1
    ---------------
    1
    2
    3
    1
    2

    Explanation
    -----------
    The number of trees changes as follows:

    1. A tree of height 5 is added.
    The garden contains:
    {5}

    2. A tree of height 7 is added.
    The garden contains:
    {5, 7}

    3. A tree of height 8 is added.
    The garden contains:
    {5, 7, 8}

    4. Trees of height at most 7 are removed.
    The garden contains:
    {8}

    5. A tree of height 3 is added.
    The garden contains:
    {8, 3}

    Sample Input 2
    --------------
    12
    2 256601193
    1 85138616
    1 202564041
    2 276477192
    1 55551662
    1 170271057
    2 754166580
    1 854388209
    1 772036624
    2 651124113
    1 301137866
    2 290875185

    Sample Output 2
    ---------------
    0
    1
    2
    0
    1
    2
    0
    1
    2
    2
    3
    3
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int q;
    if (!(cin >> q)) return 0;

    priority_queue<long long, vector<long long>, greater<long long>> pq;

    for (int i = 0; i < q; i++) {
        int t;
        long long h;
        cin >> t >> h;

        if (t == 1) {
            pq.push(h);
        } else {
            while (!pq.empty() && pq.top() <= h) {
                pq.pop();
            }
        }
        cout << pq.size() << "\n";
    }

    return 0;
}

