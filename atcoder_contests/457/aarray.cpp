/*
A - Array

Time Limit: 2 sec
Memory Limit: 1024 MiB

Score:
100 points

Problem Statement
You are given a sequence:

A = (A1, A2, ..., AN)

of length N.

After that, an integer X between 1 and N
(inclusive) is given.

Output the value of AX.

Constraints
- 1 ≤ X ≤ N ≤ 100
- 1 ≤ Ai ≤ 100
- All input values are integers.

Input
The input is given from Standard Input
in the following format:

N
A1 A2 ... AN
X

Output
Output the value of AX.

Sample Input 1
5
1 2 3 4 5
3

Sample Output 1
3

Explanation:
We have:

(A1, A2, A3, A4, A5) = (1,2,3,4,5)

Since:
A3 = 3

the answer is 3.

Sample Input 2
10
6 6 9 6 10 5 7 2 8 2
4

Sample Output 2
6

Sample Input 3
10
4 4 4 3 4 2 1 1 2 1
10

Sample Output 3
1
*/

#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int e;
        cin>>e;
        arr.push_back(e);
    }

    int j;
    cin>>j;
    cout<<arr[j-1];
    return 0;
}