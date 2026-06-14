/*
    Problem B - mpp

    Time Limit: 2 sec
    Memory Limit: 1024 MiB

    Score:
    200 points

    ------------------------------------------------------------

    Problem Statement

    You are given a string S consisting of lowercase English letters.

    Remove all occurrences of the most frequent character(s) in S,
    then output the remaining characters concatenated in their
    original order.

    If there are multiple characters with the maximum frequency,
    remove all of them.

    ------------------------------------------------------------

    Constraints

    1 ≤ |S| ≤ 100

    S is a string consisting of lowercase English letters.

    ------------------------------------------------------------

    Input

    The input is given from Standard Input in the following format:

        S

    ------------------------------------------------------------

    Output

    Output the answer.

    ------------------------------------------------------------

    Sample Input 1

        mississippi

    Sample Output 1

        mpp

    Explanation:
    The most frequent characters in "mississippi" are 's' and 'i',
    each appearing four times. Removing all occurrences of 's'
    and 'i' yields the string "mpp".

    ------------------------------------------------------------

    Sample Input 2

        atcoder

    Sample Output 2

        

    ------------------------------------------------------------

    Sample Input 3

        beginner

    Sample Output 3

        bgir

*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<int>hash(25,0);
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++;
    }
    int mx=0;
    for(auto it:hash)mx=max(it,mx);
    string ans="";
    for(char c:s){
        if(hash[c-'a']!=mx)ans+=c;
    }
    cout<<ans;
    return 0;
}