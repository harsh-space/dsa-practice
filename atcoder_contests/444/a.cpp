/*
    A - Repdigit
    Time Limit: 2 sec
    Memory Limit: 1024 MiB

    Score:
    100 points

    Problem Statement
    -----------------
    You are given a 3-digit positive integer N.
    Determine whether all digits are the same when N is represented in decimal.

    Constraints
    -----------
    100 ≤ N ≤ 999
    The input value is an integer.

    Input
    -----
    The input is given from Standard Input in the following format:

        N

    Output
    ------
    If all digits are the same when N is represented in decimal,
    output Yes in one line; otherwise, output No.

    Sample Input 1
    --------------
    444

    Sample Output 1
    ---------------
    Yes

    The digits of 444 are 4, 4, 4, which are the same, so output Yes.

    Sample Input 2
    --------------
    160

    Sample Output 2
    ---------------
    No

    The digits of 160 are 1, 6, 0, which are not the same, so output No.

    Sample Input 3
    --------------
    999

    Sample Output 3
    ---------------
    Yes
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s=to_string(n);
    set<char>st;
    for(int i=0;i<s.size()-1;i++){
        st.insert(s[i]);

    }
    if(st.size()==1)cout<<"Yes";
    else cout<<"No";
    return 0;
}