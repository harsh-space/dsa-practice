/*

D - Chalkboard Median  / 
Time Limit: 2 sec / Memory Limit: 1024 MiB

Score : 
400 points

Problem Statement
There is one integer 
X written on a blackboard.

You are given 
Q queries to process in order. The 
i-th query 
(1≤i≤Q) is as follows.

Two integers 
A 
i
​
  and 
B 
i
​
  are given. Write two new integers 
A 
i
​
  and 
B 
i
​
  on the blackboard.

Then, output the median of the 
2i+1 integers written on the blackboard.

Constraints
1≤X≤10 
9
 
1≤Q≤2×10 
5
 
1≤A 
i
​
 ,B 
i
​
 ≤10 
9
 
All input values are integers.
Input
The input is given from Standard Input in the following format:

X
Q
A 
1
​
  
B 
1
​
 
A 
2
​
  
B 
2
​
 
⋮
A 
Q
​
  
B 
Q
​
 
Output
Output 
Q lines.

The 
i-th line should contain the answer to the 
i-th query.

Sample Input 1

5
3
2 3
1 2
8 9
Sample Output 1

3
2
3
In the first query, the integers written on the blackboard become 
5,2,3, and their median is 
3.

In the second query, the integers written on the blackboard become 
5,2,3,1,2, and their median is 
2.

In the third query, the integers written on the blackboard become 
5,2,3,1,2,8,9, and their median is 
3.

Sample Input 2

1
4
2 3
4 5
6 7
8 9
Sample Output 2

2
3
4
5
Sample Input 3
278117031
7
167642909 517897721
148434323 567739597
319926999 481642530
659199879 252516557
49913403 798318034
89701408 892537201
199166668 742285869
Sample Output 3

278117031
278117031
319926999
319926999
319926999
319926999
319926999

*/


#include<bits/stdc++.h> 
using namespace std; 

vector<int>boardmed(vector<int>&bd,const vector<vector<int>>&que){ 
    vector<int>temp; 
    for(auto it:que){ 
        bd.push_back(it[0]); 
        bd.push_back(it[1]); 
        sort(bd.begin(),bd.end()); 
        int s=bd.size(); 
        if(s%2==0){ 
            temp.push_back((bd[s/2-1]+bd[s/2])/2); 
        } 
        else{ 
            temp.push_back(bd[s/2]); 
        } 
    } 
    return temp; 
} 

int main(){ 
    int x; 
    cin>>x; 
    int q; 
    cin>>q; 
    vector<int>bd={x}; 
    vector<vector<int>>quq; 
    for(int i=0;i<q;i++){ 
        int a,b; 
        cin>>a>>b; 
        vector<int>temp={a,b}; 
        quq.push_back(temp); 
    } 
    vector<int>ans=boardmed(bd,quq); 
    for(int i:ans){ 
        cout<<i<<endl; 
    } 
    return 0; 
}