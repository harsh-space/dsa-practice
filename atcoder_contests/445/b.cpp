/*
    B - Center Alignment
    Time Limit: 2 sec
    Memory Limit: 1024 MiB

    Score:
    200 points

    Problem Statement:
    You are given N strings S1, S2, ..., SN of odd lengths consisting of lowercase English letters.

    Let m be the length of the longest string among S1, S2, ..., SN.

    Find strings T1, T2, ..., TN satisfying the following condition:

    Condition:
    Ti is a string of length m formed by concatenating:
    - k copies of '.'
    - Si
    - k copies of '.'

    in this order, for some non-negative integer k.

    Constraints:
    - N is an integer between 1 and 100, inclusive.
    - Si is a string of odd length between 1 and 99, inclusive.
    - Each Si consists of lowercase English letters.

    Input:
    The input is given from Standard Input in the following format:

    N
    S1
    S2
    ⋮
    SN

    Output:
    Output N lines.

    The i-th line (1 ≤ i ≤ N) should contain Ti.

    Sample Input 1:
    4
    apple
    blueberry
    coconut
    dragonfruit

    Sample Output 1:
    ...apple...
    .blueberry.
    ..coconut..
    dragonfruit

    Explanation:
    m = 11, and T1, T2, T3, T4 satisfy the condition for:
    k = 3, 1, 2, 0 respectively.

    Sample Input 2:
    6
    abc
    d
    efghi
    jkl
    mnopq
    r

    Sample Output 2:
    .abc.
    ..d..
    efghi
    .jkl.
    mnopq
    ..r..
*/


#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    size_t ss=0;
    vector<string>str(n,"");
    for(int i=0;i<n;i++){
        cin>>str[i];
        ss=max(str[i].length(),ss);
    }
    for(int i=0;i<n;i++){
        if((ss-str[i].size())%2==0){
            int cnt=(ss-str[i].size())/2;
            if(cnt==0)cout<<str[i]<<endl;
            else{
                for(int j=0;j<cnt;j++){
                    str[i]='.'+str[i];
                }
                for(int j=0;j<cnt;j++){
                    str[i]=str[i]+'.';
                }
                cout<<str[i]<<endl;
            }
        }
    }

    return 0;
}