/*
    A - illegal
    Time Limit: 2 sec / Memory Limit: 1024 MiB

    Score :
    100 points

    Problem Statement
    In the country of AtCoder where Takahashi lives, there is a peculiar law:
    "You must not write a string whose length is a multiple of 5."

    Takahashi wrote a string S.
    Determine whether he is violating this law.

    Constraints
    - S is a string of length between 1 and 10, inclusive.
    - S consists of lowercase English letters.

    Input
    The input is given from Standard Input in the following format:

        S

    Output
    If Takahashi is violating the law, output Yes; otherwise, output No.

    Sample Input 1
        legal

    Sample Output 1
        Yes

    Explanation:
    "legal" is a string of length 5.
    Thus, Takahashi is violating the law, so output Yes.

    Sample Input 2
        atcoder

    Sample Output 2
        No

    Explanation:
    "atcoder" is a string of length 7.
    Thus, Takahashi is not violating the law, so output No.

    Sample Input 3
        illegal

    Sample Output 3
        No
*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;
    if(s.size()%5==0)cout<<"Yes";
    else cout<<"No";

    return 0;
}