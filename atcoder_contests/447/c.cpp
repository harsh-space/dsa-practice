/*
    C - Insert and Erase A
    Time Limit: 2 sec
    Memory Limit: 1024 MiB

    Score:
    300 points

    ---------------------------------------------------
    Problem Statement
    ---------------------------------------------------

    You are given strings S and T consisting of uppercase English letters.

    You may perform the following two types of operations
    any number of times (possibly zero) in any order:

    1. Insert one character 'A' at any position in S
       (possibly at the beginning or the end).

    2. Choose one character 'A' in S and delete it.
       The remaining characters are concatenated in
       their original order.

    Determine whether it is possible to make S equal to T,
    and if so, find the minimum total number of operations required.

    ---------------------------------------------------
    Constraints
    ---------------------------------------------------

    - S and T are strings of uppercase English letters.
    - Length of each string is between 1 and 3 × 10^5 inclusive.

    ---------------------------------------------------
    Input
    ---------------------------------------------------

    The input is given from Standard Input in the following format:

        S
        T

    ---------------------------------------------------
    Output
    ---------------------------------------------------

    If it is possible to make S equal to T,
    output the minimum total number of operations required.

    Otherwise, output -1.

    ---------------------------------------------------
    Sample Input 1
    ---------------------------------------------------

        ABC
        BACA

    ---------------------------------------------------
    Sample Output 1
    ---------------------------------------------------

        3

    Explanation:

    It is possible to make S equal to T in three operations:

    1. Insert one 'A' between the second and third characters.
       S = ABAC

    2. Delete the first character 'A'.
       S = BAC

    3. Insert one 'A' at the end.
       S = BACA

    It is impossible in two or fewer operations.

    ---------------------------------------------------
    Sample Input 2
    ---------------------------------------------------

        ABC
        ARC

    ---------------------------------------------------
    Sample Output 2
    ---------------------------------------------------

        -1

    Explanation:

    No matter how operations are performed,
    it is impossible to make S equal to T.

    ---------------------------------------------------
    Sample Input 3
    ---------------------------------------------------

        ABC
        ABC

    ---------------------------------------------------
    Sample Output 3
    ---------------------------------------------------

        0

    Explanation:

    No operations are needed.

    ---------------------------------------------------
    Sample Input 4
    ---------------------------------------------------

        AAAWAZAAAABAAAU
        AWAAZABAAAAAUA

    ---------------------------------------------------
    Sample Output 4
    ---------------------------------------------------

        9
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    
    string ts = "", tt = "";
    vector<int> ps, pt; 

    for(int i = 0; i < s.size(); i++){
        if(s[i] != 'A') {
            ts += s[i];
            ps.push_back(i); 
        }
    }
    for(int i = 0; i < t.size(); i++){
        if(t[i] != 'A') {
            tt += t[i];
            pt.push_back(i);
        }
    }
    if(ts != tt){
        cout << -1;
        return 0;
    }
    ps.push_back(s.size());
    pt.push_back(t.size());
    
    long long ans = 0; 
    for(size_t i = 0; i < ps.size(); i++){
        ans += abs(ps[i] - pt[i]);
    }
    
    cout << ans;
    
    return 0;
}
