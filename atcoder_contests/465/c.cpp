/*
    C - Reverse Permutation

    Time Limit: 2 sec
    Memory Limit: 1024 MiB

    Score:
    300 points

    ------------------------------------------------------------
    Problem Statement
    ------------------------------------------------------------

    You are given an integer N and a string S of length N
    consisting of 'o' and 'x'.

    There is an integer sequence:

        A = (A1, A2, ..., AN)

    of length N.

    Initially,

        A = (1, 2, ..., N)

    Perform the following operation on A for k = 1, 2, ..., N
    in this order:

    • If Sk = 'o':
      Reverse the first k terms of A.

      Specifically, replace A with:

        (Ak, Ak-1, ..., A1, Ak+1, Ak+2, ..., AN)

    • If Sk = 'x':
      Do nothing.

    Find A after all the operations are completed.

    ------------------------------------------------------------
    Constraints
    ------------------------------------------------------------

    • 2 ≤ N ≤ 5 × 10^5
    • N is an integer.
    • S is a string of length N consisting of 'o' and 'x'.

    ------------------------------------------------------------
    Input
    ------------------------------------------------------------

    The input is given from Standard Input in the following format:

        N
        S

    ------------------------------------------------------------
    Output
    ------------------------------------------------------------

    Output the elements of A after all the operations are
    completed, separated by spaces.

    ------------------------------------------------------------
    Sample Input 1
    ------------------------------------------------------------

    5
    ooxoo

    ------------------------------------------------------------
    Sample Output 1
    ------------------------------------------------------------

    5 2 1 3 4

    A changes as follows with each operation:

    • k = 1:
      Reverse the first 1 term.
      A becomes:
          (1, 2, 3, 4, 5)

    • k = 2:
      Reverse the first 2 terms.
      A becomes:
          (2, 1, 3, 4, 5)

    • k = 3:
      Do nothing.

    • k = 4:
      Reverse the first 4 terms.
      A becomes:
          (4, 3, 1, 2, 5)

    • k = 5:
      Reverse the first 5 terms.
      A becomes:
          (5, 2, 1, 3, 4)

    Therefore,

        A = (5, 2, 1, 3, 4)

    ------------------------------------------------------------
    Sample Input 2
    ------------------------------------------------------------

    7
    ooooooo

    ------------------------------------------------------------
    Sample Output 2
    ------------------------------------------------------------

    7 5 3 1 2 4 6

    ------------------------------------------------------------
    Sample Input 3
    ------------------------------------------------------------

    15
    xooxoxoxoxoxxoo

    ------------------------------------------------------------
    Sample Output 3
    ------------------------------------------------------------

    15 11 10 7 6 3 1 2 4 5 8 9 12 13 14
*/
#include<bits/stdc++.h>
using namespace std;
int  main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int>ar;
    for(int i=1;i<=n;i++)ar.push_back(i);
    for(int i=0;i<ar.size();i++){
        if(s[i]=='o')reverse(ar.begin(),ar.begin()+i+1);
    }
    for(int i:ar)cout<<i<<" ";
    return 0;
}