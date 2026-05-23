/*
    B - 459
    Time Limit: 2 sec
    Memory Limit: 1024 MiB

    Problem Statement:
    You are given N strings S1, S2, ..., SN consisting of
    lowercase English letters.

    Define digits C1, C2, ..., CN based on the first character
    of each string:

    abc       -> 2
    def       -> 3
    ghi       -> 4
    jkl       -> 5
    mno       -> 6
    pqrs      -> 7
    tuv       -> 8
    wxyz      -> 9

    Output the concatenation of C1, C2, ..., CN.

    Constraints:
    - 1 <= N <= 10
    - Each string length is between 1 and 10

    Input:
    N
    S1
    S2
    ...
    SN

    Output:
    Concatenated digits string.

    Sample Input 1:
    2
    algorithm heuristic

    Sample Output 1:
    24

    Sample Input 2:
    3
    i love you

    Sample Output 2:
    459
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    vector<string> str;
    long long a = 0;
    while (n--)
    {
        string s;
        cin >> s;
        str.push_back(s);
    }
    for (string &s : str)
    {
        char c = s[0];
        if (c == 'a' || c == 'b' || c == 'c')
        {
            a = a * 10 + 2;
        }
        else if (c == 'd' || c == 'e' || c == 'f')
        {
            a = a * 10 + 3;
        }
        else if (c == 'g' || c == 'h' || c == 'i')
        {
            a = a * 10 + 4;
        }
        else if (c == 'j' || c == 'k' || c == 'l')
        {
            a = a * 10 + 5;
        }
        else if (c == 'm' || c == 'n' || c == 'o')
        {
            a = a * 10 + 6;
        }
        else if (c == 'p' || c == 'q' || c == 'r' || c == 's')
        {
            a = a * 10 + 7;
        }
        else if (c == 't' || c == 'u' || c == 'v')
        {
            a = a * 10 + 8;
        }
        else if (c == 'w' || c == 'x' || c == 'y' || c == 'z')
        {
            a = a * 10 + 9;
        }
    }
    cout<<a;
    return 0;
}