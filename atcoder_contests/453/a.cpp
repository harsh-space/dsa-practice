/*
    A - Trimo

    Time Limit: 2 sec / Memory Limit: 1024 MiB

    Score : 100 points

    Problem Statement
    You are given a string S of length N.
    Output the string obtained by removing all leading consecutive 'o's from S.
    If all characters in S are 'o', output an empty string.

    Constraints
    - N is an integer satisfying 1 ≤ N ≤ 50.
    - S is a string of length N consisting of lowercase English letters.

    Input
    The input is given from Standard Input in the following format:

        N
        S

    Output
    Output the answer.

    Sample Input 1
    7
    ooparts

    Sample Output 1
    parts

    Explanation:
    Removing all leading consecutive 'o's from "ooparts" gives "parts".

    Sample Input 2
    6
    abcooo

    Sample Output 2
    abcooo

    Explanation:
    The first character may not be 'o'.

    Sample Input 3
    5
    ooooo

    Sample Output 3

    Explanation:
    All characters may be 'o'.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    cin>>n>>s;
    int p=0,q=0;
    while(p<=q){
        if(s[q]=='o')q++;
        else break;
    }
    string ans="";
    for(int i=q;i<n;i++){
        ans+=s[i];
    }
    cout<<ans;
    
    return 0;


}