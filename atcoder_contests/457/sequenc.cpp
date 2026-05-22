/*
C - Long Sequence

Time Limit: 2 sec
Memory Limit: 1024 MiB

Score:
300 points

Problem Statement
You are given integers N and K, along with N integer sequences:

A1, A2, ..., AN

and a length-N integer sequence:

C = (C1, C2, ..., CN)

The length of integer sequence Ai is Li, and:

Ai = (Ai,1, Ai,2, ..., Ai,Li)

It is guaranteed that:

1 ≤ K ≤ Σ(Ci × Li)

Construct an integer sequence:

B = (B1, B2, ..., BΣ(CiLi))

from A and C using the following procedure:

1. Let B be an empty sequence.
2. For i = 1 to N in order:
   - Repeat Ci times:
     append Ai to the end of B.

Find the value of BK.

Constraints
- 1 ≤ N
- 1 ≤ Li
- ΣLi ≤ 2 × 10^5
- 1 ≤ Ai,j ≤ 10^9
- 1 ≤ Ci ≤ 10^9
- 1 ≤ K ≤ Σ(Ci × Li)
- All input values are integers.

Input
The input is given from Standard Input
in the following format:

N K
L1 A1,1 A1,2 ... A1,L1
L2 A2,1 A2,2 ... A2,L2
⋮
LN AN,1 AN,2 ... AN,LN
C1 C2 ... CN

Output
Output the answer.

Sample Input 1
3 9
3 1 3 2
1 3
2 4 3
1 3 2

Sample Output 1
4

Explanation:
B is constructed as follows:

Initially:
B = ()

Append A1 once:
B = (1, 3, 2)

Append A2 three times:
B = (1, 3, 2, 3, 3, 3)

Append A3 two times:
B = (1, 3, 2, 3, 3, 3, 4, 3, 4, 3)

Thus:
B9 = 4

Sample Input 2
3 1
1 7
1 111
1 5
1 100 10000

Sample Output 2
7

Sample Input 3
3 3163812
5 1 2 3 4 5
4 9 8 7 6
2 10 11
87043 908415 9814

Sample Output 3
9
*/


#include<bits/stdc++.h>
using namespace std;

int main() {
    long long N, K;
    cin >> N >> K;

    vector<vector<long long>> A(N);
    vector<long long> L(N);

    for(int i = 0; i < N; i++) {
        cin >> L[i];

        A[i].resize(L[i]);

        for(int j = 0; j < L[i]; j++) {
            cin >> A[i][j];
        }
    }

    vector<long long> C(N);

    for(int i = 0; i < N; i++) {
        cin >> C[i];
    }

    for(int i = 0; i < N; i++) {

        long long total = L[i] * C[i];

        if(K > total) {
            K -= total;
        }
        else {

            long long idx = (K - 1) % L[i];

            cout << A[i][idx];
            return 0;
        }
    }
}