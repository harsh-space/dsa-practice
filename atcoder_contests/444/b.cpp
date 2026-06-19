/*
    B - Digit Sum
    Time Limit: 2 sec
    Memory Limit: 1024 MiB

    Score:
    200 points

    Problem Statement
    -----------------
    The digit sum of a positive integer n is defined as the sum of its digits
    when represented in decimal.

    For example:
        digit sum of 2026 = 2 + 0 + 2 + 6 = 10

    Find the number of positive integers not exceeding N whose digit sum is K.

    Constraints
    -----------
    1 ≤ N, K ≤ 10^5

    All input values are integers.

    Input
    -----
    The input is given from Standard Input in the following format:

        N
        K

    Output
    ------
    Output the answer.

    Sample Input 1
    --------------
    30 4

    Sample Output 1
    ---------------
    3

    Explanation:
    Among the positive integers not exceeding 30, there are three integers
    whose digit sum is 4:
        4, 13, 22

    Sample Input 2
    --------------
    2026 10

    Sample Output 2
    ---------------
    121

    Sample Input 3
    --------------
    99999 45

    Sample Output 3
    ---------------
    1
*/

#include<bits/stdc++.h>
using namespace std;
int fun(int n) {
    return (n == 0) ? 0 : (n % 10) + fun(n / 10);
}

int main(){
    int n,k;
    cin>>n>>k;
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(fun(i)==k)cnt++;
    }
    cout<<cnt;

    return 0;
}