/*
    B - Deconstruct Chocolate
    Time Limit: 2 sec
    Memory Limit: 1024 MiB

    Score:
    200 points

    Problem Statement
    -----------------
    There is a rectangular chocolate consisting of H rows and W columns of blocks.

    You are given Q queries. Process them in order and find the answer to each query.

    Query Types
    -----------

    Type 1:
        1 R

        - Find the number of chocolate blocks in the bottom R rows.
        - Then eat those rows.

    Type 2:
        2 C

        - Find the number of chocolate blocks in the rightmost C columns.
        - Then eat those columns.

    Notes
    -----
    - After each query, the remaining chocolate is still rectangular.
    - Before a Type 1 query, the chocolate has at least R + 1 rows.
    - Before a Type 2 query, the chocolate has at least C + 1 columns.

    Constraints
    -----------
    2 <= H, W <= 100
    1 <= Q <= 100

    For Type 1 queries:
        1 <= R

    For Type 2 queries:
        1 <= C

    All input values are integers.

    Input Format
    ------------
    H W Q

    query_1
    query_2
    ...
    query_Q

    Each query is given in one of the following formats:

        1 R
        2 C

    Output Format
    -------------
    Output Q lines.

    The i-th line should contain the answer to the i-th query.

    Sample Input
    ------------
    7 9 5
    2 4
    1 3
    2 1
    2 1
    1 3

    Sample Output
    -------------
    28
    15
    4
    4
    9

    Explanation
    -----------
    Initially:
        Chocolate = 7 rows x 9 columns

    Query 1:
        Remove rightmost 4 columns
        Blocks removed = 28
        Remaining = 7 x 5

    Query 2:
        Remove bottom 3 rows
        Blocks removed = 15
        Remaining = 4 x 5

    Query 3:
        Remove rightmost 1 column
        Blocks removed = 4
        Remaining = 4 x 4

    Query 4:
        Remove rightmost 1 column
        Blocks removed = 4
        Remaining = 4 x 3

    Query 5:
        Remove bottom 3 rows
        Blocks removed = 9
        Remaining = 1 x 3
*/

#include<bits/stdc++.h>
using namespace std;


int main(){
    int r,c,q;
    cin>>r>>c>>q;
    vector<pair<int,int>>que;
    for(int i=0;i<q;i++){
        int t,v;
        cin>>t>>v;
        que.push_back({t,v});
    }
    for(int i=0;i<q;i++){
        if(que[i].first==1){
            r-=que[i].second;
            cout<<c*que[i].second<<endl;
        }
        else{
            c-=que[i].second;
            cout<<r*que[i].second<<endl;
        }
    }

    return 0;
}