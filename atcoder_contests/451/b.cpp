/*  
    B - Personnel Change
    Time Limit: 2 sec / Memory Limit: 1024 MiB

    Score:
    200 points

    Problem Statement
    The company where Takahashi works has N employees, each assigned an employee number from 1, 2, …, N.

    There are M departments in the company, called departments 1, 2, …, M.

    Employee i belongs to department Aᵢ this term and will belong to department Bᵢ next term.

    For each of departments 1, 2, …, M, find:

    (Number of members next term) − (Number of members this term)

    Constraints
    1 ≤ N ≤ 100
    1 ≤ M ≤ 100
    1 ≤ Aᵢ ≤ M
    1 ≤ Bᵢ ≤ M

    All input values are integers.

    Input
    The input is given from Standard Input in the following format:

    N M
    A₁ B₁
    A₂ B₂
    ⋮
    Aₙ Bₙ

    Output
    Output M lines.

    The j-th line should contain the answer for department j.

    Sample Input 1
    5 4
    1 2
    2 1
    3 1
    2 2
    2 4

    Sample Output 1
    1
    -1
    -1
    1

    Explanation
    For department 1:
    - This term: employee 1 belongs.
    - Next term: employees 2 and 3 belong.

    For department 2:
    - This term: employees 2, 4, and 5 belong.
    - Next term: employees 1 and 4 belong.

    For department 3:
    - This term: employee 3 belongs.
    - Next term: no employees belong.

    For department 4:
    - This term: no employees belong.
    - Next term: employee 5 belongs.

    Sample Input 2
    10 5
    3 2
    3 4
    1 2
    2 2
    4 4
    3 1
    3 4
    4 2
    3 3
    3 2

    Sample Output 2
    0
    4
    -5
    1
    0
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    unordered_map<int,int>mp1;
    unordered_map<int,int>mp2;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        mp1[a]++;
        mp2[b]++;

    }
    vector<int>ans;
    for(int i=1;i<=m;i++){
        ans.push_back(mp2[i]-mp1[i]);
    }
    for(auto it:ans)cout<<it<<endl;
    return 0;
}