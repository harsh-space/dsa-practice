/*
B - Arrays

Time Limit: 2 sec
Memory Limit: 1024 MiB

Score:
200 points

Problem Statement
You are given N sequences:

A1, A2, ..., AN

The length of sequence Ai is Li, and:

Ai = (Ai,1, Ai,2, ..., Ai,Li)

After that, integers X and Y are given.

Output the value of AX,Y.

Constraints
- 1 ≤ N ≤ 2 × 10^5
- 1 ≤ Li
- The sum of all Li is at most 2 × 10^5
- 1 ≤ Ai,j ≤ 1000
- 1 ≤ X ≤ N
- 1 ≤ Y ≤ LX
- All input values are integers.

Input
The input is given from Standard Input
in the following format:

N
L1 A1,1 A1,2 ... A1,L1
L2 A2,1 A2,2 ... A2,L2
⋮
LN AN,1 AN,2 ... AN,LN
X Y

Output
Output the value of AX,Y.

Sample Input 1
3
3 10 20 30
1 7
4 5 6 7 8
3 4

Sample Output 1
8

Explanation:
We have:

(A1, A2, A3) =
((10,20,30), (7), (5,6,7,8))

Since:
A3 = (5,6,7,8)

we get:
A3,4 = 8

So the answer is 8.

Sample Input 2
4
2 9 1
3 8 2 6
1 5
2 4 3
2 2

Sample Output 2
2

Explanation:
Since:
A2 = (8,2,6)

we have:
A2,2 = 2

Sample Input 3
1
5 100 200 300 400 500
1 5

Sample Output 3
500
*/

#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    vector<vector<int>>mat;
    for(int i=0;i<n;i++){
        int l;
        cin>>l;
        vector<int>temp;
        for(int j=0;j<l;j++){
            int e;
            cin>>e;
            temp.push_back(e);

        }
        mat.push_back(temp);
    }
    int x,y;
    cin>>x>>y;
    cout<<mat[x-1][y-1];
    return 0;
}