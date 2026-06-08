/*
    B - Split Ticketing
    Time Limit: 2 sec
    Memory Limit: 1024 MiB

    Score:
    200 points

    Problem Statement
    -----------------
    There are N stations 1, 2, ..., N arranged in a straight line
    from west to east in this order.

    The AtCoder Railway train passes through these N stations and
    runs from west to east.

    For any two integers i, j satisfying:
        1 ≤ i < j ≤ N

    the cost of boarding the train at station i and getting off at
    station j is:
        C[i][j]

    Determine whether there exist three integers a, b, c such that:

        1 ≤ a < b < c ≤ N

    and:

        C[a][b] + C[b][c] < C[a][c]

    Constraints
    -----------
    3 ≤ N ≤ 100
    1 ≤ C[i][j] ≤ 10^9

    All input values are integers.

    Input
    -----
    The input is given from Standard Input in the following format:

        N
        C[1][2] C[1][3] ... C[1][N]
        C[2][3] ... C[2][N]
        ...
        C[N-1][N]

    Output
    ------
    If there exist integers a, b, c satisfying the conditions,
    output:

        Yes

    Otherwise, output:

        No

    Sample Input 1
    --------------
    3
    45 450
    45

    Sample Output 1
    ---------------
    Yes

    Sample Input 2
    --------------
    4
    25 40 65
    30 55
    25

    Sample Output 2
    ---------------
    No
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin>>N;
    vector<vector<long long>> C(N + 1, vector<long long>(N + 1, 0));
    for (int i = 1; i < N; ++i) {
        for (int j = i + 1; j <= N; ++j) {
            cin >> C[i][j];
        }
    }
    for (int a = 1; a <= N - 2; ++a) {
        for (int b = a + 1; b <= N - 1; ++b) {
            for (int c = b + 1; c <= N; ++c) {
                if (C[a][b] + C[b][c] < C[a][c]) {
                    cout << "Yes\n";
                    return 0; 
                }
            }
        }
    }
    cout << "No\n";
    return 0;
}
