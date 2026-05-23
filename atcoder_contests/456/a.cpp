/*
    A - Dice
    Time Limit: 2 sec
    Memory Limit: 1024 MiB

    Problem Statement:
    There are 3 dice, each having faces numbered:
    1, 2, 3, 4, 5, 6

    Determine whether it is possible for the sum
    of the three rolled dice to become X.

    Constraints:
    - 1 <= X <= 20

    Input:
    X

    Output:
    Print "Yes" if possible, otherwise print "No".

    --------------------------------------------------

    Sample Input 1:
    15

    Sample Output 1:
    Yes

    Explanation:
    Example:
    4 + 5 + 6 = 15

    --------------------------------------------------

    Sample Input 2:
    2

    Sample Output 2:
    No
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;
    if (x >= 3 && x <= 18) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}
