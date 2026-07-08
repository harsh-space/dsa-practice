/*
    C - Tallest at the Moment
    Time Limit : 2 sec
    Memory Limit: 1024 MiB

    Score:
    300 points

    -------------------------------------------------------------------------------
    Problem Statement
    -------------------------------------------------------------------------------

    Currently, there are N Takahashi in a conference room.

    The i-th (1 ≤ i ≤ N) Takahashi has:
        • Height: Hi
        • Will leave the room Li minutes from now.

    Once a Takahashi leaves the room, he never returns.

    You are given Q queries.

    For the i-th (1 ≤ i ≤ Q) query, you are given an integer Ti.

    Find the maximum height among the Takahashi who are still in the room
    Ti + 0.5 minutes from now.

    It is guaranteed that at least one Takahashi will still be in the room
    at Ti + 0.5 minutes for every query.

    -------------------------------------------------------------------------------
    Constraints
    -------------------------------------------------------------------------------

    1 ≤ N ≤ 3 × 10^5

    1 ≤ Hi ≤ 10^9

    1 ≤ L1 ≤ L2 ≤ ... ≤ LN ≤ 10^9

    1 ≤ Q ≤ 3 × 10^5

    0 ≤ Ti < LN

    All input values are integers.

    -------------------------------------------------------------------------------
    Input
    -------------------------------------------------------------------------------

    N

    H1 L1
    H2 L2
    ⋮
    HN LN

    Q

    T1 T2 ... TQ

    -------------------------------------------------------------------------------
    Output
    -------------------------------------------------------------------------------

    Output Q lines.

    The i-th line should contain the answer to the i-th query.

    -------------------------------------------------------------------------------
    Sample Input 1
    -------------------------------------------------------------------------------

    4
    31 4
    26 5
    3 5
    15 9
    4
    3 4 5 6

    -------------------------------------------------------------------------------
    Sample Output 1
    -------------------------------------------------------------------------------

    31
    26
    15
    15

    -------------------------------------------------------------------------------
    Sample Input 2
    -------------------------------------------------------------------------------

    10
    587 138
    772 155
    755 404
    519 408
    529 432
    169 586
    114 632
    249 656
    329 972
    299 984
    14
    443 801 824 276 399 314 300 510 311 580 498 930 359 5

    -------------------------------------------------------------------------------
    Sample Output 2
    -------------------------------------------------------------------------------

    329
    329
    329
    755
    755
    755
    755
    329
    755
    329
    329
    329
    755
    772
*/
#include<bits/stdc++.h> 
using namespace std; 

int main(){ 
    int n; 
    cin>>n; 
    int maxt=INT_MIN; 
    map<int,int>mp; 
    for(int i=0;i<n;i++){ 
        int h,t; 
        cin>>h>>t; 
        maxt=max(maxt,t); 
        mp[t]=max(mp[t],h); 
    } 
    
    int q;
    cin>>q; 
    vector<int>qt(q,0); 
    for(int i=0;i<q;i++)cin>>qt[i]; 
    int maxh = mp[maxt]; 

    map<int, int> ans_map;
    ans_map[maxt] = maxh; 

    for(int i=maxt-1;i>=0;i--){ 
        if(mp.count(i)!=0){ 
            maxh=max(maxh,mp[i]); 
        } 
        ans_map[i]=maxh;
    } 

    for(int i:qt){ 
        cout<<ans_map[i+1]<<"\n"; 
    } 
    return 0; 
}
