/*
B - Count Adjacent Cells  / 
Time Limit: 2 sec / Memory Limit: 1024 MiB

Score : 
200 points

Problem Statement
There is a grid with 
H rows and 
W columns. The cell at the 
i-th row from the top and the 
j-th column from the left is denoted as cell 
(i,j).

Cells 
(x1,y1) and 
(x2,y2) are said to be edge-adjacent when 
∣x1−x2∣+∣y1−y2∣=1.

For every cell, find the number of cells that are edge-adjacent to it.

Constraints
1≤H,W≤50
All input values are integers.
Input
The input is given from Standard Input in the following format:

H 
W
Output
Output the answer in the following format:

x 
1,1
​
  
x 
1,2
​
  
⋯ 
x 
1,W
​
 
x 
2,1
​
  
x 
2,2
​
  
⋯ 
x 
2,W
​
 
⋮
x 
H,1
​
  
x 
H,2
​
  
⋯ 
x 
H,W
​
 
Here, 
x 
i,j
​
  represents the number of cells that are edge-adjacent to cell 
(i,j).

Sample Input 1
4 5
Sample Output 1
2 3 3 3 2
3 4 4 4 3
3 4 4 4 3
2 3 3 3 2
The cells edge-adjacent to cell 
(1,5) are cells 
(1,4),(2,5), for a total of two cells.

The cells edge-adjacent to cell 
(2,3) are cells 
(1,3),(2,2),(2,4),(3,3), for a total of four cells.

The cells edge-adjacent to cell 
(4,2) are cells 
(3,2),(4,1),(4,3), for a total of three cells.

Sample Input 2
1 1
Sample Output 2
0
There are no cells edge-adjacent to cell 
(1,1).

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