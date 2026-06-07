/*
    A - Mod While Positive
    Time Limit: 2 sec
    Memory Limit: 1024 MiB

    Score:
    100 points

    Problem Statement
    You are given positive integers N and M.

    If the following operation is repeated while the value of M is not 0,
    find the number of operations performed.

    Operation:
        Let x be the remainder when N is divided by M.
        Replace the value of M with x.

    It can be proved that M becomes 0 after a finite number of operations.

    Constraints
    1 ≤ N, M ≤ 1000
    All input values are integers.

    Input
    The input is given from Standard Input in the following format:

        N M

    Output
    Output the answer.

    Sample Input 1
        8 5

    Sample Output 1
        3

    Explanation
    Initially, N = 8 and M = 5.

    - 8 % 5 = 3  →  M = 3
    - 8 % 3 = 2  →  M = 2
    - 8 % 2 = 0  →  M = 0

    Thus, the number of operations is 3.

    Sample Input 2
        14 6

    Sample Output 2
        2

    Sample Input 3
        460 33

    Sample Output 3
        5
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int c=0;
    while(m>0){
        int x=n%m;
        m=x;
        c++;
    }
    cout<<c;
}