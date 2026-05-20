/*A - Chompers  / 
Time Limit: 2 sec / Memory Limit: 1024 MiB

Score : 
100 points

Problem Statement
You are given a string 
S consisting of lowercase English letters and a positive integer 
N. The length of 
S is at least 
2N+1.

Find the string obtained by removing 
N characters from the beginning and 
N characters from the end of 
S.

Constraints
S is a string consisting of lowercase English letters.
N is an integer.
2N+1≤∣S∣≤30
1≤N≤10
Input
The input is given from Standard Input in the following format:

S
N
Output
Output the answer.

Sample Input 1
chemotherapy
3
Sample Output 1
mother
Removing the first three characters (che) and the last three characters (apy) from chemotherapy gives mother.

Sample Input 2
thermometer
4
Sample Output 2
mom
Sample Input 3
burger
1
Sample Output 3
urge*/

#include<bits/stdc++.h>
using namespace std;
string chomper(string &s,int n){
    int l=s.size();
    string ans= s.substr(n,l-2*n);
    return ans;
}
int main(){
    int n;
    string s;
    cin>>n;
    cin>>s;
    cout<<chomper(s,n);
    return 0;
}