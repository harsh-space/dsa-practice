/*
    C - Sushi
    Time Limit: 2 sec
    Memory Limit: 1024 MiB

    Score:
    300 points

    Problem Statement
    -----------------
    There are N pieces of shari (vinegared rice) and M pieces of neta (toppings)
    as ingredients for sushi.

    The weight of the i-th shari is Ai,
    and the weight of the j-th neta is Bj.

    You will make sushi by combining shari and neta.

    To make one piece of sushi:
      - Combine one shari with one neta.
      - The weight of the neta must be at most twice the weight of the shari.
      - The same shari or neta cannot be used in multiple pieces of sushi.

    Find the maximum number of sushi that can be made.

    Constraints
    -----------
    1 ≤ N, M ≤ 2 × 10^5
    1 ≤ Ai, Bj ≤ 10^9

    All input values are integers.

    Input
    -----
    The input is given from Standard Input in the following format:

        N M
        A1 A2 ... AN
        B1 B2 ... BM

    Output
    ------
    Output the answer.

    Sample Input 1
    --------------
    4 5
    4 2 1 8
    14 9 3 2 9

    Sample Output 1
    ---------------
    3

    Sample Input 2
    --------------
    3 3
    5 5 3
    11 1000 1000

    Sample Output 2
    ---------------
    0

    Sample Input 3
    --------------
    8 7
    2 3 4 4 4 3 2 3
    8 5 5 9 9 7 1

    Sample Output 3
    ---------------
    5
*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;
    vector<int> arr(n,0);
    vector<int>ar(m,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<m;i++){
        cin>>ar[i];
    }
    sort(arr.begin(),arr.end());
    sort(ar.begin(),ar.end());
    int cnt=0;
    int i=0,j=0;
    while(i<n && j<m ){
        if(ar[j]<=arr[i]*2){
            cnt++;
            i++;
            j++;
        }
        else i++;
    }
    cout<<cnt;
    return 0;
}