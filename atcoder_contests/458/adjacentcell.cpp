/*
B - Count Adjacent Cells

Time Limit: 2 sec
Memory Limit: 1024 MiB

Score:
200 points

Problem Statement
There is a grid with H rows and W columns.

The cell at the i-th row from the top and
the j-th column from the left is denoted
as cell (i, j).

Cells (x1, y1) and (x2, y2) are said to be
edge-adjacent when:

|x1 - x2| + |y1 - y2| = 1

For every cell, find the number of cells
that are edge-adjacent to it.

Constraints
- 1 ≤ H, W ≤ 50
- All input values are integers.

Input
The input is given from Standard Input
in the following format:

H W

Output
Output the answer in the following format:

x1,1 x1,2 ... x1,W
x2,1 x2,2 ... x2,W
⋮
xH,1 xH,2 ... xH,W

Here, xi,j represents the number of cells
that are edge-adjacent to cell (i, j).

Sample Input 1
4 5

Sample Output 1
2 3 3 3 2
3 4 4 4 3
3 4 4 4 3
2 3 3 3 2

Explanation:
- Cell (1,5) is adjacent to:
  (1,4), (2,5)
  → total = 2

- Cell (2,3) is adjacent to:
  (1,3), (2,2), (2,4), (3,3)
  → total = 4

- Cell (4,2) is adjacent to:
  (3,2), (4,1), (4,3)
  → total = 3

Sample Input 2
1 1

Sample Output 2
0

Explanation:
There are no cells edge-adjacent
to cell (1,1).

Sample Input 3
12 8

Sample Output 3
2 3 3 3 3 3 3 2
3 4 4 4 4 4 4 3
3 4 4 4 4 4 4 3
3 4 4 4 4 4 4 3
3 4 4 4 4 4 4 3
3 4 4 4 4 4 4 3
3 4 4 4 4 4 4 3
3 4 4 4 4 4 4 3
3 4 4 4 4 4 4 3
3 4 4 4 4 4 4 3
3 4 4 4 4 4 4 3
2 3 3 3 3 3 3 2
*/

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>adjcell(const vector<vector<int>>&mat){
    vector<vector<int>>ans=mat;
    int n=mat.size();
    int m=mat[0].size();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int cnt=0;
            if(i+1<n)cnt++;
            if(i-1>=0)cnt++;
            if(j+1<m)cnt++;
            if(j-1>=0)cnt++;

            ans[i][j]=cnt;
        }
    }
    return ans;
}

int main(){
    int r,c;
    cin>>r>>c;
    vector<vector<int>>mat;
    for(int i=0;i<r;i++){
        vector<int>temp;
        for(int j=0;j<c;j++){
            temp.push_back(1);
        }
        mat.push_back(temp);
    }
    vector<vector<int>>ans=adjcell(mat);
    for(auto it:ans){
        for(int i:it)cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}