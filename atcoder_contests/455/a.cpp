/*
    A - 455
    Time Limit: 2 sec
    Memory Limit: 1024 MiB

    Problem Statement:
    You are given three integers A, B, and C.

    Output "Yes" if:
        - A != B
        - B == C

    Otherwise, output "No".

    --------------------------------------------------

    Constraints:
    - 1 <= A, B, C <= 9
    - All input values are integers.

    --------------------------------------------------

    Input Format:
    A B C

    --------------------------------------------------

    Output:
    Print "Yes" or "No" according to the conditions.

    --------------------------------------------------

    Sample Input 1:
    4 5 5

    Sample Output 1:
    Yes

    Explanation:
    4 != 5 and 5 == 5,
    so the answer is "Yes".

    --------------------------------------------------

    Sample Input 2:
    1 3 7

    Sample Output 2:
    No

    Explanation:
    Although 1 != 3,
    we do not have 3 == 7.

    --------------------------------------------------

    Sample Input 3:
    6 6 6

    Sample Output 3:
    No
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
  
  int a,b,c;
  cin>>a>>b>>c;
  if(a!=b and b==c)cout<<"Yes";
  else cout<<"No";
  return 0;
}