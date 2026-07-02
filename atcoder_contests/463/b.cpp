/*
    B - Train Reservation
    Time Limit: 2 sec
    Memory Limit: 1024 MiB

    Score:
    200 points

    Problem Statement:
    Takahashi is trying to reserve a seat on a train.

    There are N trains he is considering as candidates for reservation,
    numbered 1, 2, ..., N.

    Each train has seats in five columns:
    A, B, C, D, and E.

    The current seat availability information for each train is given as
    strings S1, S2, ..., SN.

    - Each string has length 5.
    - Columns A through E correspond to the 1st through 5th characters.
    - If the character is 'o', the seat is vacant.
    - If the character is 'x', the seat is occupied.

    Takahashi wants to reserve a seat in column X,
    where X is one of: A, B, C, D, E.

    Determine whether there is at least one vacant seat in column X
    across all trains.

    Constraints:
    - 1 <= N <= 100
    - X is one of A, B, C, D, E
    - Si is a string of length 5 consisting of 'o' and 'x'

    Input Format:
    N X
    S1
    S2
    ...
    SN

    Output:
    - Print "Yes" if there is at least one vacant seat in column X.
    - Otherwise, print "No".

    Sample Input 1:
    3 A
    xoxox
    xxooo
    oxxxx

    Sample Output 1:
    Yes

    Explanation:
    Train 3 has a vacant seat in column A.

    Sample Input 2:
    5 C
    xoxoo
    oxxoo
    oxxxo
    xoxxx
    oxxoo

    Sample Output 2:
    No

    Explanation:
    No train has a vacant seat in column C.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    char c;
    cin>>n>>c;
    vector<string>ar;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        ar.push_back(s);
    }
    bool f=false;
    for(auto it:ar){
        if(it[c-'A']=='o'){
            f=true;
            break;
        }
    }
    if(f)cout<<"Yes";
    else cout<<"No";
    return 0;
}