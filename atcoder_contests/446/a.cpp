/*
    A - Handmaid
    Time Limit: 2 sec / Memory Limit: 1024 MiB

    Score:
    100 points

    Problem Statement
    You are given the name S of a certain person.

    - The first character of S is an uppercase English letter.
    - The remaining characters are lowercase English letters.

    The name of this person's handmaid is defined as:
    1. Convert the first character of S to lowercase.
    2. Add "Of" to the beginning of the resulting string.

    Find the name of the handmaid.

    Constraints
    - S is a string of length between 1 and 10, inclusive.
    - The first character of S is an uppercase English letter.
    - All other characters are lowercase English letters.

    Input
    The input is given from Standard Input in the following format:

        S

    Output
    Output the answer on one line.

    Sample Input 1
        Glen

    Sample Output 1
        Ofglen

    Sample Input 2
        I

    Sample Output 2
        Ofi

    Sample Input 3
        Fred

    Sample Output 3
        Offred
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    string ans=s.substr(1,s.size()-1);
    ans = string("Of") + (char)tolower(s[0]) + ans;

    cout<<ans;
    return 0;
}
