/*
    D - Make Target 2
    Time Limit: 2 sec
    Memory Limit: 1024 MiB

    Score:
    425 points

    Problem Statement
    -----------------
    There is a two-dimensional coordinate plane.

    A lattice point with coordinates (x, y) is painted:
        - Black if max(|x|, |y|) is even
        - White if max(|x|, |y|) is odd

    Among all integer pairs (x, y) satisfying:
        L <= x <= R
        D <= y <= U

    find the number of pairs for which the point (x, y) is painted black.

    Constraints
    -----------
    -10^6 <= L <= R <= 10^6
    -10^6 <= D <= U <= 10^6

    All input values are integers.

    Input
    -----
    The input is given from Standard Input in the following format:

        L R D U

    Output
    ------
    Output the answer.

    Sample Input 1
    --------------
        -4 3 1 3

    Sample Output 1
    ---------------
        10

    Sample Input 2
    --------------
        -14 14 -14 14

    Sample Output 2
    ---------------
        449
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int l,r,d,u;
    if(!(cin>>l>>r>>d>>u))return 0;
    long long cnt=0;
    for(int x=l;x<=r;x++){
        for(int y=d;y<=u;y++){
            if(max(abs(x),abs(y))%2==0)cnt++;
        }
    }
    cout<<cnt;

    return 0;
}

