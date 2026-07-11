/*
    B - Representative Balls

    Time Limit: 2 sec
    Memory Limit: 1024 MiB

    Score:
    200 points

    --------------------------------------------------
    Problem Statement
    --------------------------------------------------

    There are N balls.

    The color of the i-th ball is Ci, and its size is Si.
    The colors are represented by integers 1, 2, ..., M.

    For each k = 1, 2, ..., M, output:

    - the maximum size of a ball whose color is k, or
    - -1 if there is no ball of color k.

    --------------------------------------------------
    Constraints
    --------------------------------------------------

    - 1 ≤ N, M ≤ 100
    - 1 ≤ Ci ≤ M
    - 1 ≤ Si ≤ 100
    - All input values are integers.

    --------------------------------------------------
    Input
    --------------------------------------------------

    The input is given from Standard Input in the following format:

    N M
    C1 S1
    C2 S2
    ⋮
    CN SN

    --------------------------------------------------
    Output
    --------------------------------------------------

    For k = 1, 2, ..., M, output the maximum size of a ball of color k if such a ball exists, or -1 otherwise.

    Print the answers separated by spaces.

    --------------------------------------------------
    Sample Input 1
    --------------------------------------------------

    4 5
    1 3
    2 10
    1 7
    4 9

    --------------------------------------------------
    Sample Output 1
    --------------------------------------------------

    7 10 -1 9 -1

    --------------------------------------------------
    Sample Input 2
    --------------------------------------------------

    5 5
    2 6
    5 12
    5 2
    5 9
    2 7

    --------------------------------------------------
    Sample Output 2
    --------------------------------------------------

    -1 7 -1 -1 12 
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int m;
    cin>>m;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        int c,s;
        cin>>c>>s;
        mp[c]=max(mp[c],s);
    }
    for(int i=1;i<=m;i++){
        if(mp.count(i)==0)cout<<-1<<" ";
        else cout<<mp[i]<<" ";
    }

    return 0;
}
