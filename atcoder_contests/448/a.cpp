/*
    A - chmin
    Time Limit: 2 sec
    Memory Limit: 1024 MiB

    Score:
    100 points

    Problem Statement
    -----------------
    You are given a length-N integer sequence:
        A = (A1, A2, ..., AN)
    and an integer X.

    For i = 1, 2, ..., N in this order, do the following:

        If Ai < X:
            update X = Ai
            output 1

        Otherwise:
            output 0


    Constraints
    -----------
    - All input values are integers.
    - 1 ≤ N, X, Ai ≤ 100


    Input
    -----
    The input is given from Standard Input in the following format:

        N X
        A1 A2 ... AN


    Output
    ------
    Output N lines.

    The k-th line should contain the output for i = k.


    Sample Input 1
    --------------
    5 10
    6 4 7 1 3

    Sample Output 1
    ---------------
    1
    1
    0
    1
    0


    Explanation
    -----------
    Initially, X = 10.

    i = 1:
        A1 = 6 < X = 10
        Update X = 6
        Output 1

    i = 2:
        A2 = 4 < X = 6
        Update X = 4
        Output 1

    i = 3:
        A3 = 7 ≥ X = 4
        Output 0

    i = 4:
        A4 = 1 < X = 4
        Update X = 1
        Output 1

    i = 5:
        A5 = 3 ≥ X = 1
        Output 0


    Sample Input 2
    --------------
    1 1
    1

    Sample Output 2
    ---------------
    0


    Sample Input 3
    --------------
    8 20
    9 19 14 17 17 4 18 4

    Sample Output 3
    ---------------
    1
    0
    0
    0
    0
    1
    0
    0
*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,x;
    cin>>n>>x;
    vector<int>ar(n,0);
    for(int i=0;i<n;i++)cin>>ar[i];
    for(int i:ar){
        if(i<x){
            x=i;
            cout<<1<<endl;
        }
        else cout<<0<<endl;
    }
    return 0;
}