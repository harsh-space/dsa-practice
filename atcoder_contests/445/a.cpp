/*
    A - Strong Word
    Time Limit: 2 sec
    Memory Limit: 1024 MiB

    Score:
    100 points

    Problem Statement:
    You are given a string S of length at least 2 consisting of lowercase English letters.

    Determine whether the first character and the last character of S are the same.

    Constraints:
    - S is a string of length between 2 and 10 (inclusive), consisting of lowercase English letters.

    Input:
    The input is given from Standard Input in the following format:

    S

    Output:
    If the first character and the last character of S are the same, output:
    Yes

    Otherwise, output:
    No

    Sample Input 1:
    luminol

    Sample Output 1:
    Yes

    Explanation:
    The first character is 'l' and the last character is 'l', which match.
    Thus, output Yes.

    Sample Input 2:
    rule

    Sample Output 2:
    No

    Explanation:
    The first character is 'r' and the last character is 'e', which do not match.
    Thus, output No.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    cout<<(s[0]==s[s.size()-1]?"Yes":"No");
    return 0;
}