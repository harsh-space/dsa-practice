/*
    A - Compromise
    Time Limit: 2 sec
    Memory Limit: 1024 MiB

    Score:
    100 points

    Problem Statement
    -----------------
    There are N choices.

    You will choose one of these choices.
    If you choose the i-th choice, your happiness will be Xi.

    If your happiness will be negative no matter which choice you choose,
    output "Yes"; otherwise, output "No".

    Constraints
    -----------
    2 ≤ N ≤ 10
    -100 ≤ Xi ≤ 100

    All input values are integers.

    Input
    -----
    The input is given from Standard Input in the following format:

        N
        X1 X2 ... XN

    Output
    ------
    Output "Yes" or "No" according to the instructions.

    Sample Input 1
    --------------
    4
    2 0 -1 2

    Sample Output 1
    ---------------
    No

    Sample Input 2
    --------------
    3
    -5 -2 -1

    Sample Output 2
    ---------------
    Yes

    Sample Input 3
    --------------
    4
    0 -2 0 -1

    Sample Output 3
    ---------------
    No
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int max_happiness = -101;
    
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (x > max_happiness) {
            max_happiness = x;
        }
    }
    if (max_happiness < 0) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    } 
    return 0;
}
