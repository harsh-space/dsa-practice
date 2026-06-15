/*
    B - Greedy Draft
    Time Limit: 2 sec
    Memory Limit: 1024 MiB

    Score:
    200 points

    Problem Statement
    -----------------
    There are N customers numbered 1 to N, and M canned juices
    numbered 1 to M.

    Customer i (1 ≤ i ≤ N) has a wish list of length Li.

    The j-th item (1 ≤ j ≤ Li) from the top of customer i's
    wish list is canned juice Xi,j.

    For any customer i, the numbers:
    Xi,1, Xi,2, ..., Xi,Li
    are distinct.

    Customers 1, 2, ..., N, in this order, will now choose
    their beverages following the procedure below:

    • If the customer's wish list contains a canned juice
    that has not yet been chosen by anyone at that point,
    they choose the canned juice whose number appears
    earliest in their wish list.

    • Otherwise, they choose water.

    Determine which beverage each customer gets.

    Constraints
    -----------
    1 ≤ N ≤ 100
    1 ≤ M ≤ 100

    1 ≤ Li ≤ M          (1 ≤ i ≤ N)

    1 ≤ Xi,j ≤ M        (1 ≤ i ≤ N)

    Xi,1, Xi,2, ..., Xi,Li are distinct.   (1 ≤ i ≤ N)

    All input values are integers.

    Input
    -----
    The input is given from Standard Input in the following format:

    N M

    L1
    X1,1 X1,2 ... X1,L1

    L2
    X2,1 X2,2 ... X2,L2

    ⋮

    LN
    XN,1 XN,2 ... XN,LN

    Output
    ------
    Output N lines.

    The i-th line (1 ≤ i ≤ N) should contain:

    • the number of the canned juice customer i gets, or
    • 0 if customer i gets water.


    Sample Input 1
    --------------
    4 5
    3
    3 1 2
    3
    3 2 1
    2
    2 3
    4
    2 5 3 1

    Sample Output 1
    ---------------
    3
    2
    0
    5


    Explanation
    -----------
    Customer 1:
    Available juices = {3, 1, 2}
    Earliest in list = 3
    → chooses 3

    Customer 2:
    Available juices = {2, 1}
    Earliest in list = 2
    → chooses 2

    Customer 3:
    All juices already taken
    → chooses water (0)

    Customer 4:
    Available juices = {5, 1}
    Earliest in list = 5
    → chooses 5


    Sample Input 2
    --------------
    6 5
    1
    3
    2
    3 5
    5
    5 3 1 4 2
    5
    5 1 3 4 2
    5
    3 4 1 5 2
    5
    5 1 3 2 4

    Sample Output 2
    ---------------
    3
    5
    1
    4
    2
    0
*/
#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,m;
    cin>>n>>m;
    set<int>st;
    while(n--){
        int l;
        cin>>l;
        vector<int>t(l,0);
        for(int i=0;i<l;i++)cin>>t[i];
        bool f=false;
        for(int i:t){
            if(st.find(i)==st.end()){
                cout<<i<<endl;
                st.insert(i);
                f=true;
                break;
            }
            
        }
        if(!f)cout<<0<<endl;

    }
    return 0;
}