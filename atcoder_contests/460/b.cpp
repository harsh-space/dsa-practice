/*
    B - Two Rings
    Time Limit: 2 sec
    Memory Limit: 1024 MiB

    Score:
    250 points

    Problem Statement
    -----------------
    There are two circles C1 and C2 on the xy-plane.
    In this problem, a circle refers to the circumference.

    Circle C1:
        Center -> (X1, Y1)
        Radius -> R1

    Circle C2:
        Center -> (X2, Y2)
        Radius -> R2

    Determine whether circles C1 and C2 have a common point.
    In other words, determine whether there exists at least one point
    whose distance from (X1, Y1) is R1 and whose distance from
    (X2, Y2) is R2.

    You are given T test cases; solve each one.

    Constraints
    -----------
    1 <= T <= 100

    0 <= X1, Y1, X2, Y2 <= 10^9
    1 <= R1, R2 <= 10^9

    All input values are integers.

    Input
    -----
    The input is given from Standard Input in the following format:

        T
        case1
        case2
        ...
        caseT

    Each test case is given in the following format:

        X1 Y1 R1 X2 Y2 R2

    Output
    ------
    Output T lines.

    For each test case:
        Print "Yes" if circles C1 and C2 have at least one common point.
        Otherwise, print "No".

    Sample Input 1
    --------------
    7
    0 0 2 2 3 2
    0 0 2 2 3 1
    1 2 5 3 2 1
    5 4 2 8 8 3
    2 1 5 5 1 2
    0 0 1 0 0 1
    0 0 500000000 1 1000000000 500000000

    Sample Output 1
    ---------------
    Yes
    No
    No
    Yes
    Yes
    Yes
    No
*/

#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long x1, y1, r1, x2, y2, r2;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    
    long long d2 = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
    long long lower = (r1 - r2) * (r1 - r2);
    long long upper = (r1 + r2) * (r1 + r2);
    
    if (d2 >= lower && d2 <= upper) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
}

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
