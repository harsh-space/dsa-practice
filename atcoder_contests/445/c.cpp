/*
    C - Sugoroku Destination
    Time Limit: 2 sec
    Memory Limit: 1024 MiB

    Score:
    300 points

    Problem Statement
    -----------------
    There are N cells: cell 1, cell 2, …, cell N, arranged in a line.

    Cell i has an integer A[i] written on it, where:
        i ≤ A[i] ≤ N

    For each starting position s = 1, 2, …, N, solve the following problem:

    - Initially, place a piece on cell s.
    - Perform the following operation 10^100 times:

        Let x be the integer written on the cell where the piece is currently placed,
        then move the piece to cell x.

    Output the number of the cell where the piece is located after all operations.

    Constraints
    -----------
    1 ≤ N ≤ 5 × 10^5
    i ≤ A[i] ≤ N   (1 ≤ i ≤ N)

    All input values are integers.

    Input
    -----
    The input is given from Standard Input in the following format:

    N
    A1 A2 ... AN

    Output
    ------
    Print the answers for s = 1, 2, …, N in order,
    separated by spaces on a single line.

    Sample Input 1
    --------------
    7
    2 4 7 5 5 6 7

    Sample Output 1
    ---------------
    5 5 7 5 5 6 7

    Explanation:
    For s = 1, the piece moves as follows:
    1 → 2 → 4 → 5 → 5 → ...

    Once the piece reaches cell 5, it never moves again.

    Sample Input 2
    --------------
    5
    1 2 3 4 5

    Sample Output 2
    ---------------
    1 2 3 4 5

    Explanation:
    It is possible that the piece never moves.

    Sample Input 3
    --------------
    15
    11 3 10 7 15 10 10 11 11 13 11 12 14 14 15

    Sample Output 3
    ---------------
    11 14 14 14 15 14 14 11 11 14 11 12 14 14 15
*/

//17/18 cases passed

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    unordered_map<int, int> itd;
    unordered_map<int, int> dti;
    vector<int> ar(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> ar[i];
        itd[i] = ar[i];
        dti[ar[i]] = i;
    }
    vector<int> ans(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        if (i == ar[i])
            ans[i] = i;
        else
        {
            int currd = ar[i];
            int curri = i;
            while (itd[curri] != dti[currd])
            {
                curri = currd;
                currd = ar[curri];
            }
            ans[i] = ar[curri];
        }
    }

    for (int i = 1; i <= n; i++)
        cout << ans[i] << " ";
    return 0;
}
