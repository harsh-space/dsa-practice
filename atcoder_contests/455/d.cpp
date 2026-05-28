/*
    D - Card Pile Query
    Time Limit: 2 sec / Memory Limit: 1024 MiB

    Score:
    400 points

    Problem Statement
    -----------------
    There are N cards and N piles of cards.

    The cards and the piles are numbered 1,2,...,N.
    Initially, pile i contains only card i.

    Perform the following operation for each i = 1,2,...,Q in order:

        Move card Ci and all cards stacked on top of card Ci,
        preserving their order, on top of card Pi.

    It is guaranteed that immediately before performing the operation:

        - cards Ci and Pi are in different piles
        - card Pi is on top of some pile

    Find the number of cards in each pile after all operations are completed.

    Constraints
    -----------
    1 <= N,Q <= 3×10^5
    1 <= Ci,Pi <= N

    When the operations are performed in order:

        - immediately before each operation,
          cards Ci and Pi are in different piles.

        - immediately before each operation,
          card Pi is on top of some pile.

    All input values are integers.

    Input
    -----
    The input is given from Standard Input in the following format:

        N Q
        C1 P1
        C2 P2
        ...
        CQ PQ

    Output
    ------
    Let Ai be the number of cards in pile i at the end.

    Output:
        A1, A2, ..., AN

    separated by spaces.

    Sample Input 1
    --------------
    5 4
    1 3
    4 5
    1 4
    4 2

    Sample Output 1
    ---------------
    0 3 1 0 1

    Sample Input 2
    --------------
    7 8
    3 1
    5 4
    2 5
    5 7
    2 3
    6 2
    3 4
    5 1

    Sample Output 2
    ---------------
    2 0 0 4 0 0 1
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    if (!(cin >> n >> q)) return 0;

    vector<pair<int, int>> que;
    for (int i = 0; i < q; i++) {
        int c, p;
        cin >> c >> p;
        que.push_back({c, p});
    }

    vector<vector<int>> arr;
    int ptr = 1;
    for (int i = 1; i <= n; i++) {
        vector<int> t;
        t.push_back(ptr);
        arr.push_back(t);
        ptr++;
    }

    for (auto &it : que) {
        vector<int> temp;
        for (auto &s : arr) {
            auto v = find(s.begin(), s.end(), it.first);
            if (v != s.end()) {
                temp.assign(v, s.end());
                s.erase(v, s.end());
                break;
            }
        }

        for (auto &s : arr) {
            auto v = find(s.begin(), s.end(), it.second);
            if (v != s.end()) {
                s.insert(v + 1, temp.begin(), temp.end());
                break;
            }
        }
    }

    vector<int> ans;
    for (auto &it : arr) {
        ans.push_back(it.size());
    }
    for (auto i = 0; i < ans.size(); i++) {
        cout << ans[i] << (i == ans.size() - 1 ? "" : " ");
    }
    return 0;
}