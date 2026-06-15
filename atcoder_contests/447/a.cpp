/*
    A - Seats 2
    Time Limit: 2 sec
    Memory Limit: 1024 MiB

    Score:
    100 points

    Problem Statement:
    There are N seats arranged in a row.
    Each seat can accommodate at most one person.

    Determine whether it is possible to seat M people
    such that no two adjacent seats are both occupied.

    Constraints:
    1 ≤ N, M ≤ 100
    All input values are integers.

    Input:
    The input is given from Standard Input
    in the following format:

        N M

    Output:
    Output "Yes" if it is possible to seat the people
    satisfying the condition, and "No" otherwise.

    Sample Input 1:
        6 3

    Sample Output 1:
        Yes

    Sample Input 2:
        4 3

    Sample Output 2:
        No

    Sample Input 3:
        5 3

    Sample Output 3:
        Yes

    Sample Input 4:
        44 7

    Sample Output 4:
        Yes
*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;
    if(n-m>=m-1)cout<<"Yes";
    else cout<<"No";
    
    return 0;
}