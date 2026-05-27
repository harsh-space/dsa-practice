/*
    B - Mapping
    Time Limit: 2 sec
    Memory Limit: 1024 MiB

    Problem Statement:
    There are N people numbered from 1 to N.

    There are M types of clothes numbered from 1 to M.
    Person i is wearing clothes of type Fi.

    Answer the following two questions:

    Question 1:
    Are all N people wearing different types of clothes?

    Question 2:
    For every one of the M clothing types,
    is there at least one person wearing that type?

    --------------------------------------------------

    Constraints:
    - 1 <= N <= 100
    - 1 <= M <= 100
    - 1 <= Fi <= M

    All input values are integers.

    --------------------------------------------------

    Input Format:
    N M
    F1 F2 ... FN

    --------------------------------------------------

    Output:
    Print two lines.

    Line 1:
        "Yes" if all people wear different clothes,
        otherwise "No".

    Line 2:
        "Yes" if every clothing type appears at least once,
        otherwise "No".

    --------------------------------------------------

    Sample Input 1:
    3 4
    1 2 4

    Sample Output 1:
    Yes
    No

    Explanation:
    - All people wear different clothes -> Yes
    - No one wears type 3 -> No

    --------------------------------------------------

    Sample Input 2:
    4 2
    1 2 1 2

    Sample Output 2:
    No
    Yes

    --------------------------------------------------

    Sample Input 3:
    4 4
    1 3 2 1

    Sample Output 3:
    No
    No

    --------------------------------------------------

    Sample Input 4:
    5 5
    1 3 4 2 5

    Sample Output 4:
    Yes
    Yes
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,M;
    cin>>N>>M;
    vector<int>w(N+1);
    for(int i=1;i<=N;i++){
        cin>>w[i];
    }
    vector<int>copyw=w;
    sort(copyw.begin(),copyw.end());
    bool flag=true;
    for(int i=1;i<N;i++){
        if(copyw[i]==copyw[i+1]){
            flag=false;
            break;
        }
    }
    cout<<(flag?"Yes":"No");
    bool flag2=true;
    vector<int>c(M+1,0);
    for(int i=1;i<=N;i++)c[w[i]]++;
    for(int i=1;i<=M;i++){
        if(c[i]==0){
            flag2=false;
            break;
        }
    }
    cout<<endl;
    cout<<(flag2?"Yes":"No");
    return 0;
}