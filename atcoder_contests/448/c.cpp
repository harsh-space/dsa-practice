/*
C - Except and Min
Time Limit: 2 sec
Memory Limit: 1024 MiB

Score:
300 points

Problem Statement
-----------------
A bag contains N balls numbered 1 to N.

Ball i has the integer Ai written on it.

Process Q queries.

For each query, a sequence:
B1, B2, ..., BK

of length K is given, and you should perform the following operations:

1. Remove balls:
   B1, B2, ..., BK
   from the bag.

2. Output the minimum value among the integers written on the balls
   currently remaining in the bag.

   It is guaranteed that the bag is not empty at this point.

3. Return all removed balls back into the bag.

Constraints
-----------
6 ≤ N ≤ 3 × 10^5
1 ≤ Q ≤ 2 × 10^5
1 ≤ Ai ≤ 10^9
1 ≤ K ≤ 5
1 ≤ B1 < B2 < ... < BK ≤ N

The sum of K over all queries is at most:
4 × 10^5

All input values are integers.

Input
-----
The input is given from Standard Input in the following format:

N Q

A1 A2 ... AN

query1
query2
...
queryQ

Each query is given in the following format:

K
B1 B2 ... BK

Output
------
Output Q lines.

The i-th line should contain the answer to the i-th query.

Sample Input 1
--------------
6 6
3 2 5 9 1 2
2
4 5
5
1 2 3 4 6
3
2 5 6
4
1 2 5 6
1
5
3
1 2 3

Sample Output 1
---------------
2
1
3
5
2
1

Explanation
-----------
For example, in the first query:

Balls 4 and 5 are removed from the bag.

The remaining balls are:

- Ball 1 with value 3
- Ball 2 with value 2
- Ball 3 with value 5
- Ball 6 with value 2

Thus, the minimum value among the remaining balls is:
2
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    // Store {value, original_index}
    vector<pair<int, int>> balls(n);
    for (int i = 0; i < n; i++) {
        cin >> balls[i].first;
        balls[i].second = i + 1; // 1-based indexing
    }

    sort(balls.begin(), balls.end());

    int candidates_count = min(n, 6);
    vector<pair<int, int>> smallest_six(balls.begin(), balls.begin() + candidates_count);

    while (q--) {
        int k;
        cin >> k;
        vector<int> removed(k);
        for (int j = 0; j < k; j++) {
            cin >> removed[j];
        }

        for (int i = 0; i < candidates_count; i++) {
            int ball_idx = smallest_six[i].second;
            
            bool is_removed = false;
            for (int r : removed) {
                if (ball_idx == r) {
                    is_removed = true;
                    break;
                }
            }

            if (!is_removed) {
                cout << smallest_six[i].first << "\n";
                break;
            }
        }
    }

    return 0;
}
