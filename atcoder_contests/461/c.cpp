/*
    C - Variety
    Time Limit: 2 sec
    Memory Limit: 1024 MiB

    Score:
    300 points

    Problem Statement
    -----------------
    There are N gems.

    The color (represented as an integer) of the i-th gem is Ci,
    and its value is Vi.

    Choose K gems from these N gems.
    The chosen gems must contain at least M distinct colors.

    Find the maximum possible total value of the chosen gems.

    (Such a choice is always possible in the given input.)

    Constraints
    -----------
    1 ≤ M ≤ K ≤ N ≤ 2 × 10^5
    1 ≤ Ci ≤ N
    1 ≤ Vi ≤ 10^9

    There exist gems of at least M distinct colors.
    All input values are integers.

    Input
    -----
    The input is given from Standard Input in the following format:

        N K M
        C1 V1
        C2 V2
        .
        .
        .
        CN VN

    Output
    ------
    Output the maximum possible total value of the chosen gems.

    Sample Input 1
    --------------
    5 3 2
    1 30
    1 40
    1 50
    2 10
    3 20

    Sample Output 1
    ---------------
    110

    Explanation:
    Choosing gems 2, 3, and 5 gives colors:
        1, 1, 3

    These contain two distinct colors.
    Total value:
        40 + 50 + 20 = 110

    This is the maximum possible value.

    Sample Input 2
    --------------
    5 3 3
    1 30
    1 40
    1 50
    2 10
    3 20

    Sample Output 2
    ---------------
    80

    Explanation:
    Choosing gems 3, 4, and 5 gives colors:
        1, 2, 3

    These contain three distinct colors.
    Total value:
        50 + 10 + 20 = 80

    This is the maximum possible value.

    Sample Input 3
    --------------
    5 5 1
    4 1000000000
    5 1000000000
    4 1000000000
    5 1000000000
    4 1000000000

    Sample Output 3
    ---------------
    5000000000

    Beware of overflow.
*/

#include<bits/stdc++.h> 
using namespace std; 

int main(){ 
    int n,k,m; 
    cin>>n>>k>>m; 
    vector<pair<int,long long>>gems; 
    for(int i=0;i<n;i++){ 
        int c; 
        long long v; 
        cin>>c>>v; 
        gems.push_back({c,v}); 
    } 
    sort(gems.begin(),gems.end(),[](auto a,auto b){ return a.second>b.second; }); 
    
    long long ans=0; 
    int r=k-m; 
    vector<int>used; 
    set<int>us; 
    int j=0; 
    int cnt = 0; 

    while(j<gems.size() && cnt < k){ 
        if(find(used.begin(),used.end(),gems[j].first)==used.end()){ 
            us.insert(gems[j].first); 
            ans+=gems[j].second; 
            used.push_back(gems[j].first); 
            cnt++; 
        } 
        else if(find(used.begin(),used.end(),gems[j].first)!=used.end() && (r!=0 || us.size() >= m)){ 
            ans+=gems[j].second; 
            if(us.size() < m) r--; 
            cnt++; 
        } 
        j++; 
    } 
    cout<<ans; 
    return 0; 
}
