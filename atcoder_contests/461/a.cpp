/*
    A - Armor
    Time Limit: 2 sec / Memory Limit: 1024 MiB

    Score :
    100 points

    Problem Statement
    Takahashi is wearing armor.

    This armor blocks all attacks with power
    (strength represented as an integer) of D or less,
    but does not block attacks with power greater than D.

    Does this armor block an attack with power A?

    Constraints
    1 ≤ A ≤ 100
    1 ≤ D ≤ 100

    All input values are integers.

    Input
    The input is given from Standard Input in the following format:

        A D

    Output
    Output "Yes" if the armor blocks the attack,
    and "No" otherwise.

    Sample Input 1
        4 5

    Sample Output 1
        Yes

    In this sample:
    A = 4 and D = 5.

    Since A ≤ D, the armor blocks the attack,
    so the answer is "Yes".

    --------------------------------------------------

    Sample Input 2
        5 5

    Sample Output 2
        Yes

    In this sample:
    A = 5 and D = 5.

    Since A ≤ D, the armor blocks the attack,
    so the answer is "Yes".

    --------------------------------------------------

    Sample Input 3
        6 5

    Sample Output 3
        No

    In this sample:
    A = 6 and D = 5.

    Since A > D, the armor does not block the attack,
    so the answer is "No".
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,d;
    cin>>a>>d;
    if(a<=d)cout<<"Yes";
    else cout<<"No";

    return 0;
}