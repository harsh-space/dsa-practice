/*
    B - The Honest Woodcutters
    Time Limit: 2 sec
    Memory Limit: 1024 MiB

    Score:
    200 points

    Problem Statement
    -----------------
    N woodcutters 1,2,…,N each have one axe.
    All of them dropped their axes into a pond.

    N axes 1,2,…,N were found sunk in the pond.

    Each woodcutter i claims:
        "I owned axe A[i]."

    On the other hand, the goddess of the pond knows that
    the woodcutter who actually owned axe i is woodcutter B[i].

    Determine whether all N woodcutters are telling the truth.

    Constraints
    -----------
    1 ≤ N ≤ 100

    1 ≤ A[i] ≤ N
    1 ≤ B[i] ≤ N

    A[i] != A[j]  (i != j)
    B[i] != B[j]  (i != j)

    All input values are integers.

    Input
    -----
    The input is given from Standard Input in the following format:

        N
        A1 A2 ... AN
        B1 B2 ... BN

    Output
    ------
    Output "Yes" if all N woodcutters are telling the truth,
    and "No" otherwise.

    Sample Input 1
    --------------
    3
    3 1 2
    2 3 1

    Sample Output 1
    ---------------
    Yes

    All N woodcutters are telling the truth.

    Sample Input 2
    --------------
    4
    1 2 3 4
    1 3 2 4

    Sample Output 2
    ---------------
    No

    Woodcutters 2 and 3 are lying.

    Sample Input 3
    --------------
    5
    2 4 5 1 3
    4 1 5 2 3

    Sample Output 3
    ---------------
    Yes
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;
    
    vector<int> a(n + 1);
    vector<int> b(n + 1);
    
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) cin >> b[i];
    
    for (int i = 1; i <= n; i++) {
        int claimed = a[i];
        int owner = b[claimed];
        
        if (owner != i) {
            cout << "No\n";
            return 0;
        }
    }
    
    cout << "Yes\n";
    return 0;
}
