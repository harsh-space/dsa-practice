/*
    C - Drop Blocks
    Time Limit: 2 sec
    Memory Limit: 1024 MiB

    Problem Statement:
    There are N cells arranged in a row from left to right.
    Initially, all cells contain 0 blocks.

    You are given Q queries. Process them in order.

    Query Types:

    1 x
        - Place 1 block in the x-th cell.
        - After placing, if every cell has at least 1 block,
          remove 1 block from every cell.

    2 y
        - Output the number of cells having at least y blocks.

    Constraints:
    - 1 <= N <= 3 × 10^5
    - 1 <= Q <= 3 × 10^5
    - 1 <= x <= N
    - 1 <= y <= 3 × 10^5
    - At least one query of type 2 exists.

    Input Format:
    N Q
    query1
    query2
    ...
    queryQ

    Query formats:
    1 x
    2 y

    Output:
    For every query of type 2, output the answer on a new line.

    ------------------------------------------------------------

    Sample Input 1:
    3 7
    1 1
    1 3
    1 3
    2 1
    2 2
    1 2
    2 1

    Sample Output 1:
    2
    1
    1

    Explanation:

    Initially:
    (0, 0, 0)

    Query 1: 1 1
    Add block to cell 1:
    (1, 0, 0)

    Query 2: 1 3
    Add block to cell 3:
    (1, 0, 1)

    Query 3: 1 3
    Add block to cell 3:
    (1, 0, 2)

    Query 4: 2 1
    Cells with at least 1 block:
    cell 1 and cell 3
    Answer = 2

    Query 5: 2 2
    Cells with at least 2 blocks:
    only cell 3
    Answer = 1

    Query 6: 1 2
    Add block to cell 2:
    (1, 1, 2)

    Now every cell has at least 1 block,
    so remove 1 block from every cell:
    (0, 0, 1)

    Query 7: 2 1
    Cells with at least 1 block:
    only cell 3
    Answer = 1
*/



#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> row(n + 1, 0);

    int q;
    cin >> q;

    vector<pair<int,int>> que;

    for(int i = 0; i < q; i++) {

        int f, s;
        cin >> f >> s;

        que.push_back({f, s});
    }

    for(auto &it : que) {

        if(it.first == 1) {

            row[it.second]++;

            bool ok = true;
            for(int i = 1; i <= n; i++) {

                if(row[i] == 0) {
                    ok = false;
                    break;
                }
            }
            if(ok) {

                for(int i = 1; i <= n; i++) {
                    row[i]--;
                }
            }
        }

        else if(it.first == 2) {

            int cnt = 0;

            for(int i = 1; i <= n; i++) {

                if(row[i] >= it.second)
                    cnt++;
            }

            cout << cnt << endl;
        }
    }

    return 0;
}