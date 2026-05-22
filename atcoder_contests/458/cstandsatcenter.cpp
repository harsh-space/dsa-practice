/*
C - C Stands for Center

Time Limit: 2 sec
Memory Limit: 1024 MiB

Score:
300 points

Problem Statement
You are given a string S consisting of uppercase English letters.

Find the number of substrings (contiguous subsequences) of S
that satisfy all of the following conditions:

1. It consists of an odd number of characters.
2. Its middle character is C.
   More formally, if the extracted substring consists of l characters,
   its ((l + 1) / 2)-th character is C.
3. Even if two substrings are identical as strings, they are counted
   separately if they are extracted from different positions.

Constraints
- S is a string consisting of uppercase English letters.
- Length of S is between 1 and 5 × 10^5, inclusive.

Input
The input is given from Standard Input in the following format:

S

Output
Output the answer.

Sample Input 1
ABCCA

Sample Output 1
5

Explanation:
For S = "ABCCA", the valid substrings are:

1. "ABCCA" (1st to 5th characters)
2. "BCC"   (2nd to 4th characters)
3. "C"     (3rd character only)
4. "CCA"   (3rd to 5th characters)
5. "C"     (4th character only)

Sample Input 2
XYZ

Sample Output 2
0

Sample Input 3
SMBCPROGRAMMINGCONTEST

Sample Output 3
11
*/

#include <bits/stdc++.h>
using namespace std;

long long catcenter(const string &s) {
    long long cnt = 0;
    int n = s.size();

    for (int i = 0; i < n; i++) {
        if (s[i] == 'C') {
            cnt += 1LL + min(i, n - i - 1);
        }
    }

    return cnt;
}

int main() {
    string s;
    cin >> s;

    cout << catcenter(s);
    return 0;
}