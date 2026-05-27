/*
    A - Closed Interval
    Time Limit: 2 sec
    Memory Limit: 1024 MiB

    Problem Statement:
    You are given two integers L and R.

    Find how many integers exist between
    L and R (inclusive).

    --------------------------------------------------

    Constraints:
    - 1 <= L <= R <= 100
    - All input values are integers.

    --------------------------------------------------

    Input Format:
    L R

    --------------------------------------------------

    Output:
    Print the number of integers in the interval [L, R].

    --------------------------------------------------

    Sample Input 1:
    3 5

    Sample Output 1:
    3

    Explanation:
    The integers between 3 and 5 inclusive are:
        3, 4, 5

    Total = 3

    --------------------------------------------------

    Sample Input 2:
    1 7

    Sample Output 2:
    7

    --------------------------------------------------

    Sample Input 3:
    14 79

    Sample Output 3:
    66
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int L, R;
    cin >> L >> R;
    cout << (R - L + 1);

    return 0;
}