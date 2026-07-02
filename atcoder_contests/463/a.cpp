/*
    A - 16:9
    Time Limit: 2 sec
    Memory Limit: 1024 MiB

    Score:
    100 points

    Problem Statement:
    There is an image with a width of X pixels and a height of Y pixels.
    Determine whether the ratio of the width to the height is 16:9,
    that is, whether X:Y = 16:9.

    Constraints:
    1 ≤ X ≤ 1000
    1 ≤ Y ≤ 1000
    All input values are integers.

    Input:
    The input is given from Standard Input in the following format:

        X Y

    Output:
    If the ratio of the width to the height is 16:9, output "Yes";
    otherwise, output "No".

    Sample Input 1:
        800 450

    Sample Output 1:
        Yes

    Sample Input 2:
        234 108

    Sample Output 2:
        No

    Sample Input 3:
        108 192

    Sample Output 3:
        No
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    if(x*9==y*16)cout<<"Yes";
    else cout<<"NO";
    return 0;
}